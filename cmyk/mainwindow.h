#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace CMYK {

class MainWindow : public QMainWindow{

    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();
};

} //namespace CMYK

#endif // MAINWINDOW_H
