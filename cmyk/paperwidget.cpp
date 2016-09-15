#include <QSqlTableModel>
#include <QTableView>
#include <QBoxLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QSqlError>
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

        hbl->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));

        vbl->addLayout(hbl);
    }

    model = new QSqlTableModel();
    model->setTable("paper");
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("Название"));
    model->setHeaderData(1, Qt::Horizontal, tr("Плотность"));
    model->setHeaderData(2, Qt::Horizontal, tr("Количество"));
    model->setHeaderData(3, Qt::Horizontal, tr("Тип"));
    model->setHeaderData(4, Qt::Horizontal, tr("Цена за лист"));

    QTableView *view = new QTableView();
    view->setModel(model);
    view->show();

    vbl->addWidget(view);

}

void PaperWidget::slot_add_paper(){
    int cnt=model->rowCount();

        if (!model->insertRows(cnt,1))
        {
             QMessageBox::critical(this, tr("БД"),
                                 tr("Вставка строки вызвала следующую ошибку:\r\n %1")
                                 .arg(model->lastError().databaseText()));

        }
}

void PaperWidget::slot_delete_paper(){
    //ВАЖНО
    //Проверить бумаги в списке заказов. Если используется -> удаление запрещено
    //Добавить диалог ok / cansel

    //ЧУЖОЙ КОД, ПОСМОТРЕТЬ ПОЗЖЕ
//    int row;
//      QItemSelectionModel    *selectModel;
//      QModelIndexList         indexes;
//      QModelIndex             index;

//        // Узнаем выделенную строку
//        selectModel = view->selectionModel();
//        indexes = selectModel->selectedIndexes();

//        foreach(index, indexes)
//        {
//            QString str;
//            row = index.row();
//            if (!model->removeRows(row,1))
//            {
//                str = model->lastError().text();
//                qDebug() << str << "\n\r";
//                break;
//            }
//            else
//            {
//                view->setRowHidden(row, true);
//            }
//        }
//        SlotChange();
//        SlotClick();
}

} // namespace CMYK
