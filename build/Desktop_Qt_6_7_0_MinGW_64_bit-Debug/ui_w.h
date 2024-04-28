/********************************************************************************
** Form generated from reading UI file 'w.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_H
#define UI_W_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_W
{
public:
    QLabel *label;

    void setupUi(QWidget *W)
    {
        if (W->objectName().isEmpty())
            W->setObjectName("W");
        W->resize(1000, 650);
        label = new QLabel(W);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 991, 641));

        retranslateUi(W);

        QMetaObject::connectSlotsByName(W);
    } // setupUi

    void retranslateUi(QWidget *W)
    {
        W->setWindowTitle(QCoreApplication::translate("W", "Form", nullptr));
        label->setText(QCoreApplication::translate("W", "Win!!!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class W: public Ui_W {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_H
