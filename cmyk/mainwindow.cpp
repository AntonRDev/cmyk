#include "mainwindow.h"
#include "mainframe.h"
#include <QVBoxLayout>

namespace CMYK {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent){

    setWindowTitle(tr("CMYKlaboratory"));
    setMinimumSize(800, 600);

    auto MF = new MainFrame(this);

    setCentralWidget(MF);
}

MainWindow::~MainWindow(){

}

} //namespace CMYK
