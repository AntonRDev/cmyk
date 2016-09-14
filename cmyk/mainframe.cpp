#include <QVBoxLayout>
#include <QTabWidget>
#include "mainframe.h"
#include "toolsframe.h"
#include "paperwidget.h"

namespace CMYK {

MainFrame::MainFrame(QWidget *parent) : QFrame(parent){

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto VBL = new QVBoxLayout(this);

    auto TF  = new ToolsFrame;

    auto TW  = new QTabWidget(this);
    auto qw1 = new QWidget;
    auto qw2 = new PaperWidget;
    auto qw3 = new QWidget;


    TW->addTab(qw1, tr("Очередь заказов"));
    TW->addTab(qw2, tr("Бумага"));
    TW->addTab(qw3, tr("История заказов"));

    VBL->addWidget(TF);
    VBL->addItem(new QSpacerItem(0, 12, QSizePolicy::Minimum, QSizePolicy::Minimum));
    VBL->addWidget(TW);
}

MainFrame::~MainFrame(){
}

} //namespace CMYK
