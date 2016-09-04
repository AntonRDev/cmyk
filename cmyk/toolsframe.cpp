#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>
#include <QSpacerItem>

#include "toolsframe.h"

namespace CMYK {

ToolsFrame::ToolsFrame(QWidget *parent) : QFrame(parent){

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);

    QHBoxLayout *HBoxL = new QHBoxLayout(this);
    HBoxL->setMargin(0);
    HBoxL->setSpacing(10);

    QPushButton *firstBtn = new QPushButton;
    firstBtn->setText(tr("Создать\nзаказ"));

    QPushButton *secondBtn = new QPushButton;
    secondBtn->setText(tr("Срочный\nзаказ"));

    HBoxL->addWidget(firstBtn);
    HBoxL->addWidget(secondBtn);
    HBoxL->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));

}

ToolsFrame::~ToolsFrame(){
}

} //namespace CMYK