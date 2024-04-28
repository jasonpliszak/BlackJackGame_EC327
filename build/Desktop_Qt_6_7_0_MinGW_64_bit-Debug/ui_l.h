/********************************************************************************
** Form generated from reading UI file 'l.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_L_H
#define UI_L_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_L
{
public:
    QLabel *Lscreen;

    void setupUi(QWidget *L)
    {
        if (L->objectName().isEmpty())
            L->setObjectName("L");
        L->resize(1000, 650);
        Lscreen = new QLabel(L);
        Lscreen->setObjectName("Lscreen");
        Lscreen->setGeometry(QRect(0, 0, 1001, 651));
        Lscreen->setAutoFillBackground(true);

        retranslateUi(L);

        QMetaObject::connectSlotsByName(L);
    } // setupUi

    void retranslateUi(QWidget *L)
    {
        L->setWindowTitle(QCoreApplication::translate("L", "Form", nullptr));
        Lscreen->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class L: public Ui_L {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_L_H
