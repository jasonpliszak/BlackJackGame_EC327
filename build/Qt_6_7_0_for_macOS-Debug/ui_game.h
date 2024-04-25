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
    QLabel *PC1;
    QLabel *DC1;
    QPushButton *Hit;
    QPushButton *Stand;
    QPushButton *Deal;
    QLabel *label;
    QLabel *label_2;
    QLabel *DC2;
    QLabel *DC3;
    QLabel *DC4;
    QLabel *DC5;
    QLabel *PC2;
    QLabel *PC3;
    QLabel *PC4;
    QLabel *PC5;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName("Game");
        Game->resize(1000, 650);
        Game->setStyleSheet(QString::fromUtf8("background-image:url(:/images/bjtable.jpg); background-size:cover;"));
        PC1 = new QLabel(Game);
        PC1->setObjectName("PC1");
        PC1->setGeometry(QRect(30, 30, 150, 225));
        PC1->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 255, 83)"));
        PC1->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_2.gif")));
        PC1->setScaledContents(true);
        DC1 = new QLabel(Game);
        DC1->setObjectName("DC1");
        DC1->setGeometry(QRect(30, 300, 150, 225));
        DC1->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_Q.gif")));
        DC1->setScaledContents(true);
        Hit = new QPushButton(Game);
        Hit->setObjectName("Hit");
        Hit->setGeometry(QRect(40, 550, 100, 32));
        Stand = new QPushButton(Game);
        Stand->setObjectName("Stand");
        Stand->setGeometry(QRect(150, 550, 100, 32));
        Deal = new QPushButton(Game);
        Deal->setObjectName("Deal");
        Deal->setGeometry(QRect(260, 550, 100, 32));
        label = new QLabel(Game);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 141, 21));
        label_2 = new QLabel(Game);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 270, 131, 21));
        DC2 = new QLabel(Game);
        DC2->setObjectName("DC2");
        DC2->setGeometry(QRect(200, 300, 150, 225));
        DC2->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_Q.gif")));
        DC2->setScaledContents(true);
        DC3 = new QLabel(Game);
        DC3->setObjectName("DC3");
        DC3->setGeometry(QRect(370, 300, 150, 225));
        DC3->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_Q.gif")));
        DC3->setScaledContents(true);
        DC4 = new QLabel(Game);
        DC4->setObjectName("DC4");
        DC4->setGeometry(QRect(540, 300, 150, 225));
        DC4->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_Q.gif")));
        DC4->setScaledContents(true);
        DC5 = new QLabel(Game);
        DC5->setObjectName("DC5");
        DC5->setGeometry(QRect(710, 300, 150, 225));
        DC5->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_Q.gif")));
        DC5->setScaledContents(true);
        PC2 = new QLabel(Game);
        PC2->setObjectName("PC2");
        PC2->setGeometry(QRect(200, 30, 150, 225));
        PC2->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 255, 83)"));
        PC2->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_2.gif")));
        PC2->setScaledContents(true);
        PC3 = new QLabel(Game);
        PC3->setObjectName("PC3");
        PC3->setGeometry(QRect(710, 30, 150, 225));
        PC3->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 255, 83)"));
        PC3->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_2.gif")));
        PC3->setScaledContents(true);
        PC4 = new QLabel(Game);
        PC4->setObjectName("PC4");
        PC4->setGeometry(QRect(540, 30, 150, 225));
        PC4->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 255, 83)"));
        PC4->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_2.gif")));
        PC4->setScaledContents(true);
        PC5 = new QLabel(Game);
        PC5->setObjectName("PC5");
        PC5->setGeometry(QRect(370, 30, 150, 225));
        PC5->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 255, 83)"));
        PC5->setPixmap(QPixmap(QString::fromUtf8(":/images/clubs_2.gif")));
        PC5->setScaledContents(true);

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "Form", nullptr));
        PC1->setText(QString());
        DC1->setText(QString());
        Hit->setText(QCoreApplication::translate("Game", "Hit", nullptr));
        Stand->setText(QCoreApplication::translate("Game", "Stand", nullptr));
        Deal->setText(QCoreApplication::translate("Game", "Deal", nullptr));
        label->setText(QCoreApplication::translate("Game", "Player", nullptr));
        label_2->setText(QCoreApplication::translate("Game", "Dealer", nullptr));
        DC2->setText(QString());
        DC3->setText(QString());
        DC4->setText(QString());
        DC5->setText(QString());
        PC2->setText(QString());
        PC3->setText(QString());
        PC4->setText(QString());
        PC5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
