#include <QSqlTableModel>
#include <QTableView>
#include <QBoxLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>
#include "paperwidget.h"

namespace CMYK {

PaperWidget::PaperWidget(QWidget *parent) : QWidget(parent){

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto vbl = new QVBoxLayout(this);

    // tools
    {
        auto hbl = new QHBoxLayout;

        auto add_btn = new QPushButton;
        add_btn->setText(tr("Добавить"));
        hbl->addWidget(add_btn);
        connect(add_btn, SIGNAL(clicked(bool)), this, SLOT(slot_add_paper()) );

        auto del_btn = new QPushButton;
        del_btn->setText(tr("Удалить"));
        hbl->addWidget(del_btn);
        connect(del_btn, SIGNAL(clicked(bool)), this, SLOT(slot_delete_paper()) );


        hbl->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));

        vbl->addLayout(hbl);
    }

    coated_paper_model_ = new QSqlTableModel();
    coated_paper_model_->setTable("coated_paper");
    coated_paper_model_->select();
    coated_paper_model_->setHeaderData(0, Qt::Horizontal, tr("Название"));
    coated_paper_model_->setHeaderData(1, Qt::Horizontal, tr("Плотность"));
    coated_paper_model_->setHeaderData(2, Qt::Horizontal, tr("Количество"));
    coated_paper_model_->setHeaderData(3, Qt::Horizontal, tr("Тип"));
    coated_paper_model_->setHeaderData(4, Qt::Horizontal, tr("Цена за лист"));

    coated_paper_view_ = new QTableView();
    coated_paper_view_->setModel(coated_paper_model_);
    coated_paper_view_->show();

    vbl->addWidget(coated_paper_view_);

}

void PaperWidget::slot_add_paper(){
    int cnt=coated_paper_model_->rowCount();

        if (!coated_paper_model_->insertRows(cnt,1))
        {
             QMessageBox::critical(this, tr("БД"),
                                 tr("Вставка строки вызвала следующую ошибку:\r\n %1")
                                 .arg(coated_paper_model_->lastError().databaseText()));

        }
}

void PaperWidget::slot_delete_paper(){
    //ВАЖНО
    //Проверить бумаги в списке заказов. Если используется -> удаление запрещено(?)

    int reply = QMessageBox::warning(this,
                                    tr("Удаление бумаги"),
                                    tr("Удалить выбранную бумагу?"),
                                    QMessageBox::Yes, QMessageBox::No);
    if(reply == QMessageBox::No){
        return;
    }

    if(coated_paper_view_->currentIndex().isValid()){

        int row = coated_paper_view_->currentIndex().row();
        int column = coated_paper_view_->currentIndex().column();

        qDebug() << coated_paper_model_->record(row).value(column) << "deleted";

        coated_paper_model_->removeRows(row,1);
        coated_paper_model_->submitAll();

        coated_paper_model_->select();      // обновляем модель
    }
}

} // namespace CMYK
