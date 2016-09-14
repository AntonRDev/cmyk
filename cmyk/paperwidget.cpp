#include <QSqlTableModel>
#include <QTableView>
#include <QBoxLayout>
#include "paperwidget.h"

namespace CMYK {

PaperWidget::PaperWidget(QWidget *parent) : QWidget(parent){

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QVBoxLayout *VBL = new QVBoxLayout(this);

    auto model = new QSqlTableModel();
    model->setTable("paper");
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("Название"));
    model->setHeaderData(1, Qt::Horizontal, tr("Плотность"));
    model->setHeaderData(2, Qt::Horizontal, tr("Количество"));
    model->setHeaderData(3, Qt::Horizontal, tr("Тип"));
    model->setHeaderData(4, Qt::Horizontal, tr("Цена за лист"));

    QTableView *view = new QTableView();
    view->setModel(model);
    //view->hideColumn(0); // don't show the name
    view->show();

    VBL->addWidget(view);

}

} // namespace CMYK
