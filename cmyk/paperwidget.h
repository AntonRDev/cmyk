#ifndef PAPERWIDGET_H
#define PAPERWIDGET_H

#include <QWidget>
#include <QSqlTableModel>

namespace CMYK {

class PaperWidget : public QWidget{

    Q_OBJECT

private:
    QSqlTableModel * model;

public:
    PaperWidget(QWidget *parent = 0);

private slots:
    void slot_add_paper();
    void slot_delete_paper();
};

} // namespace CMYK

#endif // CONSUMAMABLESWIDGET_H
