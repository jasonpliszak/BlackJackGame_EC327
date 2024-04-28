/********************************************************************************
** Form generated from reading UI file 't.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T_H
#define UI_T_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_T
{
public:
    QLabel *label;

    void setupUi(QWidget *T)
    {
        if (T->objectName().isEmpty())
            T->setObjectName("T");
        T->resize(1000, 650);
        label = new QLabel(T);
        label->setObjectName("label");
        label->setGeometry(QRect(7, 5, 1000, 650));

        retranslateUi(T);

        QMetaObject::connectSlotsByName(T);
    } // setupUi

    void retranslateUi(QWidget *T)
    {
        T->setWindowTitle(QCoreApplication::translate("T", "Form", nullptr));
        label->setText(QCoreApplication::translate("T", "Tie!!!!!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class T: public Ui_T {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_H
