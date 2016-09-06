#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QTextEdit>
#include <QLabel>
#include <QLineEdit>
#include <QSpacerItem>
#include <QCheckBox>
#include <QComboBox>
#include <QCheckBox>
#include "orderdialog.h"

namespace CMYK{

OrderDialog::OrderDialog(QWidget *parent) : QDialog(parent){

    const int margin = 3;
    const int spacing = 0;

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    setWindowTitle(tr("Добавить заказ"));

    QVBoxLayout *L0 = new QVBoxLayout(this);

    // Область для заполнения ////////////////////////////////////////////////////
    {
        // срок сдачи / Время сдачи / / Менеджер проекта
        {
            QHBoxLayout *L1 = new QHBoxLayout();
            L1->setMargin(margin);
            L0->addLayout(L1);
            {
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Срок сдачи"));
                L2->addWidget(lbl);

                auto txt = new QLineEdit(this);
                txt->setInputMask("00.00.00");
                L2->addWidget(txt);
            }{
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Время сдачи"));
                L2->addWidget(lbl);

                auto txt = new QLineEdit(this);
                txt->setInputMask("00:00");
                L2->addWidget(txt);
            }
            L1->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));
            {
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Менеджер проекта"));
                L2->addWidget(lbl);

                auto cbxUser = new QComboBox();
                L2->addWidget(cbxUser);
            }
        }

        // Компания / Название
        {
            QHBoxLayout *L1 = new QHBoxLayout();
            L1->setMargin(margin);
            L0->addLayout(L1);
            {
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Компания"));
                L2->addWidget(lbl);

                auto txt = new QLineEdit(this);
                L2->addWidget(txt);
            }{
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Название"));
                L2->addWidget(lbl);

                auto txt = new QLineEdit(this);
                L2->addWidget(txt);
            }
        }

        // Тираж: Видов / Штук / Формат / Цветопроба /////
        {
            QHBoxLayout *L1 = new QHBoxLayout();
            L1->setMargin(margin);
            L0->addLayout(L1);
            {
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Видов"));
                L2->addWidget(lbl);

                auto txt = new QLineEdit(this);
                txt->setInputMask("000");
                L2->addWidget(txt);
            }{
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Штук"));
                L2->addWidget(lbl);

                auto txt = new QLineEdit(this);
                txt->setInputMask("00000");
                L2->addWidget(txt);
            }{
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Формат"));
                L2->addWidget(lbl);

                auto txt = new QLineEdit(this);
                L2->addWidget(txt);
            }{
                QHBoxLayout *L2 = new QHBoxLayout();
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Цветопроба"));
                L2->addWidget(lbl);

                auto chkbx = new QCheckBox(this);
                L2->addWidget(chkbx);
            }
        }

        // Бумага блок ////
        // Название / Плотность / Тип / Цветность   //////
        {
            {
                QHBoxLayout *L1 = new QHBoxLayout(); //for margin only
                L1->setMargin(margin);
                L0->addLayout(L1);

                auto lbl = new QLabel(this);
                lbl->setText(tr("<b>Бумага обложка:</b>"));
                L1->addWidget(lbl);
            }

            QHBoxLayout *L1 = new QHBoxLayout();
            L1->setMargin(margin);
            L0->addLayout(L1);
            {
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Тип"));
                L2->addWidget(lbl);

                auto cbxUser = new QComboBox();
                L2->addWidget(cbxUser);
            }{
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Плотность"));
                L2->addWidget(lbl);

                auto cbxUser = new QComboBox();
                L2->addWidget(cbxUser);
            }{
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Название"));
                L2->addWidget(lbl);

                auto cbxUser = new QComboBox();
                L2->addWidget(cbxUser);
            }{
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Цветность"));
                L2->addWidget(lbl);

                auto txt = new QLineEdit(this);
                L2->addWidget(txt);
            }
            L1->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));

        }

        // Бумага обложка ////
        // Название / Плотность / Тип / Цветность   //////
        {
            {
                QHBoxLayout *L1 = new QHBoxLayout(); //for margin only
                L1->setMargin(margin);
                L0->addLayout(L1);

                auto lbl = new QLabel(this);
                lbl->setText(tr("<b>Бумага обложка:</b>"));
                L1->addWidget(lbl);
            }

            QHBoxLayout *L1 = new QHBoxLayout();
            L1->setMargin(margin);
            L0->addLayout(L1);
            {
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Тип"));
                L2->addWidget(lbl);

                auto cbxUser = new QComboBox();
                L2->addWidget(cbxUser);
            }{
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Плотность"));
                L2->addWidget(lbl);

                auto cbxUser = new QComboBox();
                L2->addWidget(cbxUser);
            }{
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Название"));
                L2->addWidget(lbl);

                auto cbxUser = new QComboBox();
                L2->addWidget(cbxUser);
            }{
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Цветность"));
                L2->addWidget(lbl);

                auto txt = new QLineEdit(this);
                L2->addWidget(txt);
            }
            L1->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));

        }

        // Постпечатные работы ///////////////////////////////////////////////////
        // Скрепка / Биговка / Фальцовка / Пружина / Цвет пружины ////////////////
        {
            QHBoxLayout *L1 = new QHBoxLayout();
            L1->setMargin(margin);
            L0->addLayout(L1);
            {
                QHBoxLayout *L2 = new QHBoxLayout();
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Скрепка"));
                L2->addWidget(lbl);

                auto chkbx = new QCheckBox(this);
                L2->addWidget(chkbx);
            }
            L1->addItem(new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Minimum));
            {
                QHBoxLayout *L2 = new QHBoxLayout();
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Биговка"));
                L2->addWidget(lbl);

                auto chkbx = new QCheckBox(this);
                L2->addWidget(chkbx);
            }
            L1->addItem(new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Minimum));
            {
                QHBoxLayout *L2 = new QHBoxLayout();
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Фальцовка"));
                L2->addWidget(lbl);

                auto chkbx = new QCheckBox(this);
                L2->addWidget(chkbx);
            }
            L1->addItem(new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Minimum));
            {
                QHBoxLayout *L2 = new QHBoxLayout();
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Пружина"));
                L2->addWidget(lbl);

                auto chkbx = new QCheckBox(this);
                L2->addWidget(chkbx);
            }
            L1->addItem(new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Minimum));
            {
                QVBoxLayout *L2 = new QVBoxLayout();
                L1->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Цвет пружины"));
                L2->addWidget(lbl);

                auto txt = new QLineEdit(this);
                L2->addWidget(txt);
            }
        }

        // Ламинация блок
        // одностороння / двусторонняя / плотность ///////////////////////////////
        {
            {
                QHBoxLayout *L1 = new QHBoxLayout(); //for margin only
                L1->setMargin(margin);
                L0->addLayout(L1);

                auto lbl = new QLabel(this);
                lbl->setText(tr("<b>Ламинация блок:</b>"));
                L1->addWidget(lbl);
            }
            QHBoxLayout *L1 = new QHBoxLayout();
            L1->setMargin(margin);
            L0->addLayout(L1);
            {
                QHBoxLayout *L2 = new QHBoxLayout();
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Односторонняя"));
                L2->addWidget(lbl);

                auto chkbx = new QCheckBox(this);
                L2->addWidget(chkbx);
            }
            L1->addItem(new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Minimum));
            {
                QHBoxLayout *L2 = new QHBoxLayout();
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Двусторонняя"));
                L2->addWidget(lbl);

                auto chkbx = new QCheckBox(this);
                L2->addWidget(chkbx);
            }
            L1->addItem(new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Minimum));
            {
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Плотность"));
                L2->addWidget(lbl);

                auto cbxUser = new QComboBox();
                L2->addWidget(cbxUser);
            }
            L1->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));
        }

        // Ламинация обложка
        // одностороння / двусторонняя / плотность ///////////////////////////////
        {
            {
                QHBoxLayout *L1 = new QHBoxLayout(); //for margin only
                L1->setMargin(margin);
                L0->addLayout(L1);

                auto lbl = new QLabel(this);
                lbl->setText(tr("<b>Ламинация блок:</b>"));
                L1->addWidget(lbl);
            }
            QHBoxLayout *L1 = new QHBoxLayout();
            L1->setMargin(margin);
            L0->addLayout(L1);
            {
                QHBoxLayout *L2 = new QHBoxLayout();
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Односторонняя"));
                L2->addWidget(lbl);

                auto chkbx = new QCheckBox(this);
                L2->addWidget(chkbx);
            }
            L1->addItem(new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Minimum));
            {
                QHBoxLayout *L2 = new QHBoxLayout();
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Двусторонняя"));
                L2->addWidget(lbl);

                auto chkbx = new QCheckBox(this);
                L2->addWidget(chkbx);
            }
            L1->addItem(new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Minimum));
            {
                QVBoxLayout *L2 = new QVBoxLayout();
                L2->setSpacing(spacing);
                L1->addLayout(L2);

                auto lbl = new QLabel(this);
                lbl->setText(tr("Плотность"));
                L2->addWidget(lbl);

                auto cbxUser = new QComboBox();
                L2->addWidget(cbxUser);
            }
            L1->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));
        }

        // Комментарии ///////////////////////////////////////////////////////////
        {
            QVBoxLayout *L1 = new QVBoxLayout();
            L1->setSpacing(spacing);
            L1->setMargin(margin);
            L0->addItem(L1);

            auto lbl = new QLabel(this);
            lbl->setText(tr("Комментарии:"));
            L1->addWidget(lbl);

            auto txt = new QTextEdit(this);
            L1->addWidget(txt);
        }

    }{// Кнопки Принять/Отменить  ////////////////////////////////////////////////
        QHBoxLayout *L1 = new QHBoxLayout();
        L1->setMargin(margin);
        L0->addLayout(L1);

        L1->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));

        auto accept = new QPushButton(this);
        accept->setText(tr("Принять"));
        L1->addWidget(accept);

        auto cancel = new QPushButton(this);
        cancel->setText(tr("Отменить"));
        L1->addWidget(cancel);

        connect(accept, SIGNAL(clicked(bool)), this, SLOT(accept()) );
        connect(cancel, SIGNAL(clicked(bool)), this, SLOT(reject()) );
    }
}

OrderDialog::~OrderDialog(){
}

} //namespace CMYK
