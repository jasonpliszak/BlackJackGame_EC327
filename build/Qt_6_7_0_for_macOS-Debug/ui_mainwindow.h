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
        play_button->setGeometry(QRect(420, 520, 150, 40));
        play_button->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        home_screen = new QLabel(centralwidget);
        home_screen->setObjectName("home_screen");
        home_screen->setGeometry(QRect(0, 0, 1000, 650));
        home_screen->setScaledContents(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 0, 291, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("PT Sans Caption")});
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        home_screen->raise();
        play_button->raise();
        label->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        play_button->setText(QCoreApplication::translate("MainWindow", "Play BlackJack", nullptr));
        home_screen->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "EC327 Casino App", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
