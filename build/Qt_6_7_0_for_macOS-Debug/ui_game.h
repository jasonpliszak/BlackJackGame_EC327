/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QLabel *Player_Label;
    QLabel *DC1;
    QPushButton *Hit;
    QPushButton *Stand;
    QPushButton *Deal;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName("Game");
        Game->resize(800, 600);
        Game->setStyleSheet(QString::fromUtf8("background-image:url(:/images/bjtable.jpg); background-size:cover;"));
        Player_Label = new QLabel(Game);
        Player_Label->setObjectName("Player_Label");
        Player_Label->setGeometry(QRect(30, 30, 150, 225));
        Player_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 255, 83)"));
        Player_Label->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_2.gif")));
        Player_Label->setScaledContents(true);
        DC1 = new QLabel(Game);
        DC1->setObjectName("DC1");
        DC1->setGeometry(QRect(30, 280, 150, 225));
        DC1->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_Q.gif")));
        DC1->setScaledContents(true);
        Hit = new QPushButton(Game);
        Hit->setObjectName("Hit");
        Hit->setGeometry(QRect(40, 550, 100, 32));
        Stand = new QPushButton(Game);
        Stand->setObjectName("Stand");
        Stand->setGeometry(QRect(200, 550, 100, 32));
        Deal = new QPushButton(Game);
        Deal->setObjectName("Deal");
        Deal->setGeometry(QRect(360, 550, 100, 32));

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "Form", nullptr));
        Player_Label->setText(QString());
        DC1->setText(QString());
        Hit->setText(QCoreApplication::translate("Game", "Hit", nullptr));
        Stand->setText(QCoreApplication::translate("Game", "Stand", nullptr));
        Deal->setText(QCoreApplication::translate("Game", "Deal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
