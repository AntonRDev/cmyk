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
    connect(orderBtn, SIGNAL(clicked(bool)), this, SLOT(createNewOrderDialog()) );

    auto secondBtn = new QPushButton;
    secondBtn->setText(tr("Срочный\nзаказ"));

    HBoxL->addWidget(orderBtn);
    HBoxL->addWidget(secondBtn);
    HBoxL->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));

}

void ToolsFrame::createNewOrderDialog(){
    auto dia = new OrderDialog(this);
    dia->exec();
}

ToolsFrame::~ToolsFrame(){
}

} //namespace CMYK
