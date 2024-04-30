/********************************************************************************
** Form generated from reading UI file 'w.ui.autosave'
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_W
{
public:
    QLabel *Wscreen;
    QPushButton *Play_Again1;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *W)
    {
        if (W->objectName().isEmpty())
            W->setObjectName("W");
        W->resize(1000, 650);
        Wscreen = new QLabel(W);
        Wscreen->setObjectName("Wscreen");
        Wscreen->setGeometry(QRect(0, 0, 991, 641));
        Play_Again1 = new QPushButton(W);
        Play_Again1->setObjectName("Play_Again1");
        Play_Again1->setGeometry(QRect(320, 560, 100, 32));
        pushButton_2 = new QPushButton(W);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(560, 560, 100, 32));
        label = new QLabel(W);
        label->setObjectName("label");
        label->setGeometry(QRect(460, 50, 58, 16));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(W);

        QMetaObject::connectSlotsByName(W);
    } // setupUi

    void retranslateUi(QWidget *W)
    {
        W->setWindowTitle(QCoreApplication::translate("W", "Form", nullptr));
        Wscreen->setText(QString());
        Play_Again1->setText(QCoreApplication::translate("W", "Play Again", nullptr));
        pushButton_2->setText(QCoreApplication::translate("W", "Return Home", nullptr));
        label->setText(QCoreApplication::translate("W", "WIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class W: public Ui_W {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_H
