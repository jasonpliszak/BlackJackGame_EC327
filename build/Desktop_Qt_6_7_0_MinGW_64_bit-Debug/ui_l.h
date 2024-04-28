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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_L
{
public:
    QLabel *Lscreen;
    QPushButton *Play_Again;
    QPushButton *return_Home;
    QLabel *HandOver;
    QLabel *balance;

    void setupUi(QWidget *L)
    {
        if (L->objectName().isEmpty())
            L->setObjectName("L");
        L->resize(1000, 650);
        Lscreen = new QLabel(L);
        Lscreen->setObjectName("Lscreen");
        Lscreen->setGeometry(QRect(0, 0, 1001, 651));
        Lscreen->setAutoFillBackground(true);
        Lscreen->setScaledContents(true);
        Play_Again = new QPushButton(L);
        Play_Again->setObjectName("Play_Again");
        Play_Again->setGeometry(QRect(375, 560, 100, 32));
        Play_Again->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        return_Home = new QPushButton(L);
        return_Home->setObjectName("return_Home");
        return_Home->setGeometry(QRect(575, 560, 100, 32));
        return_Home->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        HandOver = new QLabel(L);
        HandOver->setObjectName("HandOver");
        HandOver->setGeometry(QRect(325, 30, 400, 61));
        QFont font;
        font.setPointSize(45);
        font.setBold(true);
        HandOver->setFont(font);
        HandOver->setStyleSheet(QString::fromUtf8("background-color: transparent; \n"
"color: rgb(0, 0, 0)"));
        HandOver->setAlignment(Qt::AlignCenter);
        balance = new QLabel(L);
        balance->setObjectName("balance");
        balance->setGeometry(QRect(800, 30, 171, 61));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        balance->setFont(font1);

        retranslateUi(L);

        QMetaObject::connectSlotsByName(L);
    } // setupUi

    void retranslateUi(QWidget *L)
    {
        L->setWindowTitle(QCoreApplication::translate("L", "Form", nullptr));
        Lscreen->setText(QString());
        Play_Again->setText(QCoreApplication::translate("L", "Play Again", nullptr));
        return_Home->setText(QCoreApplication::translate("L", "Return Home", nullptr));
        HandOver->setText(QCoreApplication::translate("L", "Hand Over", nullptr));
        balance->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class L: public Ui_L {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_L_H
