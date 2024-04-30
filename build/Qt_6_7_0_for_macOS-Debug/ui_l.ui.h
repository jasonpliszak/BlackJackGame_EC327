/********************************************************************************
** Form generated from reading UI file 'l.ui.autosave'
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
    QLabel *label;

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
        Play_Again->setGeometry(QRect(350, 560, 100, 32));
        Play_Again->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        return_Home = new QPushButton(L);
        return_Home->setObjectName("return_Home");
        return_Home->setGeometry(QRect(550, 560, 100, 32));
        return_Home->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label = new QLabel(L);
        label->setObjectName("label");
        label->setGeometry(QRect(420, 230, 171, 121));
        QFont font;
        font.setPointSize(45);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent; \n"
"color: rgb(187, 2, 0);"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(L);

        QMetaObject::connectSlotsByName(L);
    } // setupUi

    void retranslateUi(QWidget *L)
    {
        L->setWindowTitle(QCoreApplication::translate("L", "Form", nullptr));
        Lscreen->setText(QString());
        Play_Again->setText(QCoreApplication::translate("L", "Play Again", nullptr));
        return_Home->setText(QCoreApplication::translate("L", "Return Home", nullptr));
        label->setText(QCoreApplication::translate("L", "LOSE!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class L: public Ui_L {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_L_H
