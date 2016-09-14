#ifndef ORDERDIALOG_H
#define ORDERDIALOG_H

#include <QDialog>

namespace CMYK {

class OrderDialog : public QDialog{

    Q_OBJECT

public:
    OrderDialog(QWidget *parent=0);
    virtual ~OrderDialog();
};

} //namespace CMYK

#endif // ORDERDIALOG_H
