#include <QVBoxLayout>
#include <QTabWidget>
#include "mainframe.h"
#include "toolsframe.h"
#include "workframe.h"

namespace CMYK {

MainFrame::MainFrame(QWidget *parent) : QFrame(parent){

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QVBoxLayout *VBL = new QVBoxLayout(this);

    ToolsFrame *TF = new ToolsFrame;

    QTabWidget *TW = new QTabWidget(this);
    QWidget *qw1 = new QWidget;
    QWidget *qw2 = new QWidget;


    TW->addTab(qw1, "qw1");
    TW->addTab(qw2, "qw2");

    VBL->addWidget(TF);
    VBL->addWidget(TW);
}

MainFrame::~MainFrame(){
}

} //namespace CMYK
