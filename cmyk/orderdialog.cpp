#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSpacerItem>
#include <QCheckBox>
#include <QComboBox>
#include "orderdialog.h"

namespace CMYK{

OrderDialog::OrderDialog(QWidget *parent) : QDialog(parent){

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    setWindowTitle(tr("Добавить заказ"));

    QVBoxLayout *L0 = new QVBoxLayout(this);
    {//верхний фрейм
        QHBoxLayout *L1 = new QHBoxLayout();
        L0->addLayout(L1);
        {
            QVBoxLayout *L2 = new QVBoxLayout();
            L1->addLayout(L2);

            QLabel * lbl = new QLabel(this);
            lbl->setText(tr("Срок сдачи"));
            L2->addWidget(lbl);

            QLineEdit * txt = new QLineEdit(this);
            txt->setInputMask("00.00.00");
            L2->addWidget(txt);
        }{
            QVBoxLayout *L2 = new QVBoxLayout();
            L1->addLayout(L2);

            QLabel * lbl = new QLabel(this);
            lbl->setText(tr("Время сдачи"));
            L2->addWidget(lbl);

            QLineEdit * txt = new QLineEdit(this);
            txt->setInputMask("00:00");
            L2->addWidget(txt);
        }
        L1->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));
        {
            QComboBox *cbxUser = new QComboBox();
            L1->addWidget(cbxUser);
        }


    }{//нижний фрейм


    }
}

OrderDialog::~OrderDialog(){
}

} //namespace CMYK
