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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_T
{
public:
    QLabel *TScreen;
    QPushButton *Play_Again2;
    QPushButton *Return_Home2;
    QLabel *label;

    void setupUi(QWidget *T)
    {
        if (T->objectName().isEmpty())
            T->setObjectName("T");
        T->resize(1000, 650);
        TScreen = new QLabel(T);
        TScreen->setObjectName("TScreen");
        TScreen->setGeometry(QRect(0, 0, 1000, 650));
        TScreen->setAutoFillBackground(true);
        TScreen->setScaledContents(true);
        Play_Again2 = new QPushButton(T);
        Play_Again2->setObjectName("Play_Again2");
        Play_Again2->setGeometry(QRect(350, 560, 100, 32));
        Play_Again2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Return_Home2 = new QPushButton(T);
        Return_Home2->setObjectName("Return_Home2");
        Return_Home2->setGeometry(QRect(610, 560, 100, 32));
        Return_Home2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label = new QLabel(T);
        label->setObjectName("label");
        label->setGeometry(QRect(480, 70, 81, 41));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(T);

        QMetaObject::connectSlotsByName(T);
    } // setupUi

    void retranslateUi(QWidget *T)
    {
        T->setWindowTitle(QCoreApplication::translate("T", "Form", nullptr));
        TScreen->setText(QString());
        Play_Again2->setText(QCoreApplication::translate("T", "Play Again", nullptr));
        Return_Home2->setText(QCoreApplication::translate("T", "Return Home", nullptr));
        label->setText(QCoreApplication::translate("T", "TIE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class T: public Ui_T {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_H
