/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *play_button;
    QLabel *home_screen;
    QLabel *label;
    QLabel *Balance;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 650);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 129, 20);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        play_button = new QPushButton(centralwidget);
        play_button->setObjectName("play_button");
        play_button->setGeometry(QRect(425, 525, 150, 40));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        play_button->setFont(font);
        play_button->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        home_screen = new QLabel(centralwidget);
        home_screen->setObjectName("home_screen");
        home_screen->setGeometry(QRect(0, 0, 1000, 650));
        home_screen->setScaledContents(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, -20, 381, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("PT Sans Caption")});
        font1.setPointSize(25);
        font1.setBold(true);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        Balance = new QLabel(centralwidget);
        Balance->setObjectName("Balance");
        Balance->setGeometry(QRect(100, 540, 151, 21));
        Balance->setFont(font);
        Balance->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: transparent;"));
        MainWindow->setCentralWidget(centralwidget);
        home_screen->raise();
        play_button->raise();
        label->raise();
        Balance->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        play_button->setText(QCoreApplication::translate("MainWindow", "Play BlackJack", nullptr));
        home_screen->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "EC327 BlackJack App", nullptr));
        Balance->setText(QCoreApplication::translate("MainWindow", "Balance: $1000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
