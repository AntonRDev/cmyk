#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>
#include <QSpacerItem>

#include "toolsframe.h"
#include "orderdialog.h"

namespace CMYK {

ToolsFrame::ToolsFrame(QWidget *parent) : QFrame(parent){

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);

    auto HBoxL = new QHBoxLayout(this);
    HBoxL->setMargin(0);
    HBoxL->setSpacing(10);

    auto orderBtn = new QPushButton;
    orderBtn->setText(tr("Создать\nзаказ"));
    connect(orderBtn, SIGNAL(clicked(bool)), this, SLOT(create_new_order_dialog()) );
    HBoxL->addWidget(orderBtn);


    auto expressOrder = new QPushButton;
    expressOrder->setText(tr("Срочный\nзаказ"));
    HBoxL->addWidget(expressOrder);
    HBoxL->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));

    auto Propetries = new QPushButton;
    Propetries->setText(tr("Настройки"));
    HBoxL->addWidget(Propetries);

}

void ToolsFrame::create_new_order_dialog(){
    auto dia = new OrderDialog(this);
    dia->exec();
}

ToolsFrame::~ToolsFrame(){
}

} //namespace CMYK
