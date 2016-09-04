#include <QVBoxLayout>
#include "mainframe.h"
#include "toolsframe.h"
#include "workframe.h"

namespace CMYK {

MainFrame::MainFrame(QWidget *parent) : QFrame(parent){

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QVBoxLayout *VBL = new QVBoxLayout(this);

    ToolsFrame *TF = new ToolsFrame;
    WorkFrame *WF = new WorkFrame;

    VBL->addWidget(TF);
    VBL->addWidget(WF);
}

MainFrame::~MainFrame(){
}

} //namespace CMYK
