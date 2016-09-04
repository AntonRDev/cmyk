#include <QVBoxLayout>
#include <QTabWidget>
#include "mainframe.h"
#include "toolsframe.h"

namespace CMYK {

MainFrame::MainFrame(QWidget *parent) : QFrame(parent){

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QVBoxLayout *VBL = new QVBoxLayout(this);

    ToolsFrame *TF = new ToolsFrame;

    QTabWidget *TW = new QTabWidget(this);
    QWidget *qw1 = new QWidget;
    QWidget *qw2 = new QWidget;
    QWidget *qw3 = new QWidget;


    TW->addTab(qw1, tr("Очередь заказов"));
    TW->addTab(qw2, "Расходные материалы");
    TW->addTab(qw3, "История заказов");

    VBL->addWidget(TF);
    VBL->addItem(new QSpacerItem(0, 12, QSizePolicy::Minimum, QSizePolicy::Minimum));
    VBL->addWidget(TW);
}

MainFrame::~MainFrame(){
}

} //namespace CMYK
