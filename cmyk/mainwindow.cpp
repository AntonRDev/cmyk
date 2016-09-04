#include "mainwindow.h"
#include "mainframe.h"
#include <QVBoxLayout>

namespace CMYK {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent){

    setWindowTitle(tr("CMYKlaboratory"));
    setMinimumSize(600,400);

    MainFrame *MF = new MainFrame(this);

    setCentralWidget(MF);
}

MainWindow::~MainWindow(){

}

} //namespace CMYK
