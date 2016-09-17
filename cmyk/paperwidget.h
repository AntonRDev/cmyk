#ifndef PAPERWIDGET_H
#define PAPERWIDGET_H

#include <QWidget>
#include <QSqlTableModel>
#include <QTableView>

namespace CMYK {

class PaperWidget : public QWidget{

    Q_OBJECT

private:
    QSqlTableModel * coated_paper_model_;
    QTableView     * coated_paper_view_;

public:
    PaperWidget(QWidget *parent = 0);

private slots:
    void slot_add_paper();
    void slot_delete_paper();
};

} // namespace CMYK

#endif // CONSUMAMABLESWIDGET_H
