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
#include <QtWidgets/QSlider>
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
    QLabel *PlayerScore;
    QLabel *Dealer;
    QLabel *DC2;
    QLabel *DC3;
    QLabel *DC4;
    QLabel *DC5;
    QLabel *PC2;
    QLabel *PC5;
    QLabel *PC4;
    QLabel *PC3;
    QLabel *Background;
    QLabel *PC6;
    QLabel *PC7;
    QLabel *PC8;
    QLabel *PC9;
    QLabel *PC10;
    QLabel *PC11;
    QLabel *DC6;
    QLabel *DC7;
    QLabel *DC8;
    QLabel *DC9;
    QLabel *DC10;
    QLabel *DC11;
    QLabel *backtexture;
    QPushButton *Split;
    QLabel *SC1;
    QLabel *SC2;
    QLabel *SC3;
    QLabel *SC4;
    QLabel *SC5;
    QLabel *SC6;
    QLabel *availibleBalance;
    QLabel *SplitScore;
    QSlider *BetSlider;
    QLabel *BetValue;
    QLabel *BalanceLabel;
    QPushButton *Home;
    QPushButton *openRoulette;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName("Game");
        Game->resize(850, 600);
        Game->setBaseSize(QSize(850, 600));
        Game->setAutoFillBackground(true);
        Game->setStyleSheet(QString::fromUtf8(""));
        PC1 = new QLabel(Game);
        PC1->setObjectName("PC1");
        PC1->setGeometry(QRect(100, 50, 100, 125));
        PC1->setStyleSheet(QString::fromUtf8(""));
        PC1->setScaledContents(true);
        DC1 = new QLabel(Game);
        DC1->setObjectName("DC1");
        DC1->setGeometry(QRect(100, 200, 100, 125));
        DC1->setScaledContents(true);
        Hit = new QPushButton(Game);
        Hit->setObjectName("Hit");
        Hit->setGeometry(QRect(40, 550, 100, 32));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        Hit->setFont(font);
        Hit->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(58, 58, 58, 255), stop:1 rgba(0, 0, 0, 255));\n"
"\n"
"border-radius:10px;"));
        Stand = new QPushButton(Game);
        Stand->setObjectName("Stand");
        Stand->setGeometry(QRect(150, 550, 100, 32));
        Stand->setFont(font);
        Stand->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(58, 58, 58, 255), stop:1 rgba(0, 0, 0, 255));\n"
"\n"
"border-radius:10px;"));
        Deal = new QPushButton(Game);
        Deal->setObjectName("Deal");
        Deal->setGeometry(QRect(260, 550, 100, 32));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(13);
        font1.setBold(true);
        Deal->setFont(font1);
        Deal->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(58, 58, 58, 255), stop:1 rgba(0, 0, 0, 255));\n"
"\n"
"border-radius:10px;"));
        PlayerScore = new QLabel(Game);
        PlayerScore->setObjectName("PlayerScore");
        PlayerScore->setGeometry(QRect(100, 25, 141, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Kohinoor Gujarati")});
        font2.setBold(true);
        PlayerScore->setFont(font2);
        PlayerScore->setStyleSheet(QString::fromUtf8("color:white;"));
        PlayerScore->setScaledContents(true);
        Dealer = new QLabel(Game);
        Dealer->setObjectName("Dealer");
        Dealer->setGeometry(QRect(100, 175, 131, 21));
        Dealer->setFont(font2);
        Dealer->setStyleSheet(QString::fromUtf8("color:white;"));
        DC2 = new QLabel(Game);
        DC2->setObjectName("DC2");
        DC2->setGeometry(QRect(125, 200, 100, 125));
        DC2->setScaledContents(true);
        DC3 = new QLabel(Game);
        DC3->setObjectName("DC3");
        DC3->setGeometry(QRect(150, 200, 100, 125));
        DC3->setScaledContents(true);
        DC4 = new QLabel(Game);
        DC4->setObjectName("DC4");
        DC4->setGeometry(QRect(175, 200, 100, 125));
        DC4->setScaledContents(true);
        DC5 = new QLabel(Game);
        DC5->setObjectName("DC5");
        DC5->setGeometry(QRect(200, 200, 100, 125));
        DC5->setScaledContents(true);
        PC2 = new QLabel(Game);
        PC2->setObjectName("PC2");
        PC2->setGeometry(QRect(125, 50, 100, 125));
        PC2->setStyleSheet(QString::fromUtf8(""));
        PC2->setScaledContents(true);
        PC5 = new QLabel(Game);
        PC5->setObjectName("PC5");
        PC5->setGeometry(QRect(200, 50, 100, 125));
        PC5->setStyleSheet(QString::fromUtf8(""));
        PC5->setScaledContents(true);
        PC4 = new QLabel(Game);
        PC4->setObjectName("PC4");
        PC4->setGeometry(QRect(175, 50, 100, 125));
        PC4->setStyleSheet(QString::fromUtf8(""));
        PC4->setScaledContents(true);
        PC3 = new QLabel(Game);
        PC3->setObjectName("PC3");
        PC3->setGeometry(QRect(150, 50, 100, 125));
        PC3->setStyleSheet(QString::fromUtf8(""));
        PC3->setScaledContents(true);
        Background = new QLabel(Game);
        Background->setObjectName("Background");
        Background->setGeometry(QRect(0, 0, 850, 600));
        Background->setAutoFillBackground(false);
        Background->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(2, 74, 2, 255), stop:0.926108 rgba(0, 101, 0, 255))"));
        Background->setScaledContents(true);
        PC6 = new QLabel(Game);
        PC6->setObjectName("PC6");
        PC6->setGeometry(QRect(225, 50, 100, 125));
        PC6->setStyleSheet(QString::fromUtf8(""));
        PC6->setScaledContents(true);
        PC7 = new QLabel(Game);
        PC7->setObjectName("PC7");
        PC7->setGeometry(QRect(250, 50, 100, 125));
        PC7->setStyleSheet(QString::fromUtf8(""));
        PC7->setScaledContents(true);
        PC8 = new QLabel(Game);
        PC8->setObjectName("PC8");
        PC8->setGeometry(QRect(250, 50, 100, 125));
        PC8->setStyleSheet(QString::fromUtf8(""));
        PC8->setScaledContents(true);
        PC9 = new QLabel(Game);
        PC9->setObjectName("PC9");
        PC9->setGeometry(QRect(275, 50, 100, 125));
        PC9->setStyleSheet(QString::fromUtf8(""));
        PC9->setScaledContents(true);
        PC10 = new QLabel(Game);
        PC10->setObjectName("PC10");
        PC10->setGeometry(QRect(300, 50, 100, 125));
        PC10->setStyleSheet(QString::fromUtf8(""));
        PC10->setScaledContents(true);
        PC11 = new QLabel(Game);
        PC11->setObjectName("PC11");
        PC11->setGeometry(QRect(325, 50, 100, 125));
        PC11->setStyleSheet(QString::fromUtf8(""));
        PC11->setScaledContents(true);
        DC6 = new QLabel(Game);
        DC6->setObjectName("DC6");
        DC6->setGeometry(QRect(225, 200, 100, 125));
        DC6->setScaledContents(true);
        DC7 = new QLabel(Game);
        DC7->setObjectName("DC7");
        DC7->setGeometry(QRect(250, 200, 100, 125));
        DC7->setScaledContents(true);
        DC8 = new QLabel(Game);
        DC8->setObjectName("DC8");
        DC8->setGeometry(QRect(275, 200, 100, 125));
        DC8->setScaledContents(true);
        DC9 = new QLabel(Game);
        DC9->setObjectName("DC9");
        DC9->setGeometry(QRect(300, 200, 100, 125));
        DC9->setScaledContents(true);
        DC10 = new QLabel(Game);
        DC10->setObjectName("DC10");
        DC10->setGeometry(QRect(325, 200, 100, 125));
        DC10->setScaledContents(true);
        DC11 = new QLabel(Game);
        DC11->setObjectName("DC11");
        DC11->setGeometry(QRect(350, 200, 100, 125));
        DC11->setScaledContents(true);
        backtexture = new QLabel(Game);
        backtexture->setObjectName("backtexture");
        backtexture->setGeometry(QRect(0, 0, 850, 600));
        Split = new QPushButton(Game);
        Split->setObjectName("Split");
        Split->setGeometry(QRect(370, 551, 100, 31));
        Split->setFont(font1);
        Split->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(58, 58, 58, 255), stop:1 rgba(0, 0, 0, 255));\n"
"\n"
"border-radius:10px;"));
        SC1 = new QLabel(Game);
        SC1->setObjectName("SC1");
        SC1->setGeometry(QRect(400, 50, 100, 125));
        SC1->setStyleSheet(QString::fromUtf8(""));
        SC1->setScaledContents(true);
        SC2 = new QLabel(Game);
        SC2->setObjectName("SC2");
        SC2->setGeometry(QRect(425, 50, 100, 125));
        SC2->setStyleSheet(QString::fromUtf8(""));
        SC2->setScaledContents(true);
        SC3 = new QLabel(Game);
        SC3->setObjectName("SC3");
        SC3->setGeometry(QRect(450, 50, 100, 125));
        SC3->setStyleSheet(QString::fromUtf8(""));
        SC3->setScaledContents(true);
        SC4 = new QLabel(Game);
        SC4->setObjectName("SC4");
        SC4->setGeometry(QRect(475, 50, 100, 125));
        SC4->setStyleSheet(QString::fromUtf8(""));
        SC4->setScaledContents(true);
        SC5 = new QLabel(Game);
        SC5->setObjectName("SC5");
        SC5->setGeometry(QRect(500, 50, 100, 125));
        SC5->setStyleSheet(QString::fromUtf8(""));
        SC5->setScaledContents(true);
        SC6 = new QLabel(Game);
        SC6->setObjectName("SC6");
        SC6->setGeometry(QRect(525, 50, 100, 125));
        SC6->setStyleSheet(QString::fromUtf8(""));
        SC6->setScaledContents(true);
        availibleBalance = new QLabel(Game);
        availibleBalance->setObjectName("availibleBalance");
        availibleBalance->setGeometry(QRect(500, 525, 111, 21));
        SplitScore = new QLabel(Game);
        SplitScore->setObjectName("SplitScore");
        SplitScore->setGeometry(QRect(400, 25, 141, 21));
        SplitScore->setFont(font2);
        SplitScore->setStyleSheet(QString::fromUtf8("color:white;"));
        BetSlider = new QSlider(Game);
        BetSlider->setObjectName("BetSlider");
        BetSlider->setGeometry(QRect(490, 550, 160, 25));
        BetSlider->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal{\n"
"background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(58, 58, 58, 255), stop:1 rgba(0, 0, 0, 255));\n"
"border-radius:10px\n"
"}"));
        BetSlider->setOrientation(Qt::Horizontal);
        BetValue = new QLabel(Game);
        BetValue->setObjectName("BetValue");
        BetValue->setGeometry(QRect(490, 520, 141, 16));
        BetValue->setFont(font2);
        BetValue->setStyleSheet(QString::fromUtf8("color:white;"));
        BalanceLabel = new QLabel(Game);
        BalanceLabel->setObjectName("BalanceLabel");
        BalanceLabel->setGeometry(QRect(660, 550, 111, 21));
        BalanceLabel->setFont(font);
        BalanceLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Home = new QPushButton(Game);
        Home->setObjectName("Home");
        Home->setGeometry(QRect(709, 50, 81, 32));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(14);
        font3.setBold(true);
        Home->setFont(font3);
        Home->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(58, 58, 58, 255), stop:1 rgba(0, 0, 0, 255));\n"
"border-radius:10px;"));
        openRoulette = new QPushButton(Game);
        openRoulette->setObjectName("openRoulette");
        openRoulette->setGeometry(QRect(710, 90, 81, 32));
        openRoulette->setFont(font3);
        openRoulette->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(58, 58, 58, 255), stop:1 rgba(0, 0, 0, 255));\n"
"border-radius:10px;"));
        Background->raise();
        backtexture->raise();
        DC1->raise();
        PC1->raise();
        Dealer->raise();
        PlayerScore->raise();
        Hit->raise();
        Stand->raise();
        Deal->raise();
        PC10->raise();
        PC11->raise();
        DC2->raise();
        DC3->raise();
        DC4->raise();
        DC5->raise();
        DC6->raise();
        DC7->raise();
        DC8->raise();
        DC9->raise();
        DC10->raise();
        DC11->raise();
        PC2->raise();
        PC3->raise();
        PC4->raise();
        PC5->raise();
        PC6->raise();
        PC7->raise();
        PC8->raise();
        PC9->raise();
        Split->raise();
        availibleBalance->raise();
        SplitScore->raise();
        SC1->raise();
        SC2->raise();
        SC3->raise();
        SC4->raise();
        SC5->raise();
        SC6->raise();
        BetSlider->raise();
        BetValue->raise();
        BalanceLabel->raise();
        Home->raise();
        openRoulette->raise();

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "BlackJack", nullptr));
        PC1->setText(QString());
        DC1->setText(QString());
        Hit->setText(QCoreApplication::translate("Game", "Hit", nullptr));
        Stand->setText(QCoreApplication::translate("Game", "Stand", nullptr));
        Deal->setText(QCoreApplication::translate("Game", "Deal", nullptr));
        PlayerScore->setText(QString());
        Dealer->setText(QString());
        DC2->setText(QString());
        DC3->setText(QString());
        DC4->setText(QString());
        DC5->setText(QString());
        PC2->setText(QString());
        PC5->setText(QString());
        PC4->setText(QString());
        PC3->setText(QString());
        Background->setText(QString());
        PC6->setText(QString());
        PC7->setText(QString());
        PC8->setText(QString());
        PC9->setText(QString());
        PC10->setText(QString());
        PC11->setText(QString());
        DC6->setText(QString());
        DC7->setText(QString());
        DC8->setText(QString());
        DC9->setText(QString());
        DC10->setText(QString());
        DC11->setText(QString());
        backtexture->setText(QString());
        Split->setText(QCoreApplication::translate("Game", "Split", nullptr));
        SC1->setText(QString());
        SC2->setText(QString());
        SC3->setText(QString());
        SC4->setText(QString());
        SC5->setText(QString());
        SC6->setText(QString());
        availibleBalance->setText(QString());
        SplitScore->setText(QString());
        BetValue->setText(QString());
        BalanceLabel->setText(QCoreApplication::translate("Game", "Balance: ", nullptr));
        Home->setText(QCoreApplication::translate("Game", "Home", nullptr));
        openRoulette->setText(QCoreApplication::translate("Game", "Roulette", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
