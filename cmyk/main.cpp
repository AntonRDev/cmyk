#include <QApplication>
#include "mainwindow.h"
#include "database.h"

int main(int argc, char *argv[]){

    QApplication a(argc, argv);

    CMYK::Database database("localhost", "cmyk", "root", "moZHay17a");

    CMYK::MainWindow w;
    w.show();

    return a.exec();
}
