#include "roulette.h"
#include "ui_roulette.h"
#include "mainwindow.h"
#include <QRandomGenerator>
#include <QDebug>
#include <QString>
#include <QList>
#include <map>

Roulette::Roulette(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Roulette)
{
    ui->setupUi(this);

    numbers = new int[37];

    for (int i = 0; i <= 36; ++i) {
        numbers[i] = i;
    }

    balance = 1000;
    ui->WalletLabel->setText("Balance: " + QString::number(balance));

    loadlist();
    ui->WheelLabel->setPixmap(wheel.at(0));
    ui->WheelLabel->setScaledContents(true);
    ui->BetSlider->setRange(1, balance);
}


Roulette::~Roulette()
{
    delete ui;
}

void Roulette::loadlist()
{
    // Clear List
    wheel.clear();

    // Load in Images
    QPixmap spin0(":/imagesWheel/Spin0.png");
    QPixmap spin1(":/imagesWheel/Spin1.png");
    QPixmap spin2(":/imagesWheel/Spin2.png");
    QPixmap spin3(":/imagesWheel/Spin3.png");
    QPixmap spin4(":/imagesWheel/Spin4.png");
    QPixmap spin5(":/imagesWheel/Spin5.png");
    QPixmap spin6(":/imagesWheel/Spin6.png");
    QPixmap spin7(":/imagesWheel/Spin7.png");
    QPixmap spin8(":/imagesWheel/Spin8.png");
    QPixmap spin9(":/imagesWheel/Spin9.png");
    QPixmap spin10(":/imagesWheel/Spin10.png");
    QPixmap spin11(":/imagesWheel/Spin11.png");
    QPixmap spin12(":/imagesWheel/Spin12.png");
    QPixmap spin13(":/imagesWheel/Spin13.png");
    QPixmap spin14(":/imagesWheel/Spin14.png");
    QPixmap spin15(":/imagesWheel/Spin15.png");
    QPixmap spin16(":/imagesWheel/Spin16.png");
    QPixmap spin17(":/imagesWheel/Spin17.png");
    QPixmap spin18(":/imagesWheel/Spin18.png");
    QPixmap spin19(":/imagesWheel/Spin19.png");
    QPixmap spin20(":/imagesWheel/Spin20.png");
    QPixmap spin21(":/imagesWheel/Spin21.png");
    QPixmap spin22(":/imagesWheel/Spin22.png");
    QPixmap spin23(":/imagesWheel/Spin23.png");
    QPixmap spin24(":/imagesWheel/Spin24.png");
    QPixmap spin25(":/imagesWheel/Spin25.png");
    QPixmap spin26(":/imagesWheel/Spin26.png");
    QPixmap spin27(":/imagesWheel/Spin27.png");
    QPixmap spin28(":/imagesWheel/Spin28.png");
    QPixmap spin29(":/imagesWheel/Spin29.png");
    QPixmap spin30(":/imagesWheel/Spin30.png");
    QPixmap spin31(":/imagesWheel/Spin31.png");
    QPixmap spin32(":/imagesWheel/Spin32.png");
    QPixmap spin33(":/imagesWheel/Spin33.png");
    QPixmap spin34(":/imagesWheel/Spin34.png");
    QPixmap spin35(":/imagesWheel/Spin35.png");
    QPixmap spin36(":/imagesWheel/Spin36.png");

    // add images to List
    wheel.append(spin0);
    wheel.append(spin1);
    wheel.append(spin2);
    wheel.append(spin3);
    wheel.append(spin4);
    wheel.append(spin5);
    wheel.append(spin6);
    wheel.append(spin7);
    wheel.append(spin8);
    wheel.append(spin9);
    wheel.append(spin10);
    wheel.append(spin11);
    wheel.append(spin12);
    wheel.append(spin13);
    wheel.append(spin14);
    wheel.append(spin15);
    wheel.append(spin16);
    wheel.append(spin17);
    wheel.append(spin18);
    wheel.append(spin19);
    wheel.append(spin20);
    wheel.append(spin21);
    wheel.append(spin22);
    wheel.append(spin23);
    wheel.append(spin24);
    wheel.append(spin25);
    wheel.append(spin26);
    wheel.append(spin27);
    wheel.append(spin28);
    wheel.append(spin29);
    wheel.append(spin30);
    wheel.append(spin31);
    wheel.append(spin32);
    wheel.append(spin33);
    wheel.append(spin34);
    wheel.append(spin35);
    wheel.append(spin36);
}

void Roulette::on_BetSlider_valueChanged(int value)
{
    betAmount = value;
    ui->BetValueLabel->setText("Bet Amount: $" + QString::number(betAmount));
}

void Roulette::on_Spin_clicked()
{
    ui->WinLabel->setText("");
    randomNumber = QRandomGenerator::global()->bounded(0, 36);

    ui->resultLabel->setText(QString::number(randomNumber));
    ui->WheelLabel->setPixmap(wheel.at(randomNumber));
    ui->WheelLabel->setScaledContents(true);

    switch(check) {
    case 1:
        ui->BetLabel->setText("Straight up: " + QString::number(bet));
        ui->OddsLabel->setText("35:1");
        if (bet == randomNumber) {
            winnings = betAmount*35;
            balance += winnings;
            ui->WinLabel->setText("You Win!");
        } else {
            balance -= betAmount;
        }
        break;
    case 2:
        ui->BetLabel->setText("Split Bet: " + QString::number(bets[0]) +" "+ QString::number(bets[1]));
        ui->OddsLabel->setText("17:1");
        if (bets[0] == randomNumber || bets[1] == randomNumber) {
            winnings = betAmount*37;
            balance += winnings;
            ui->WinLabel->setText("You Win!");
        } else {
            balance -= betAmount;
        }
        break;
    case 3:
        ui->OddsLabel->setText("11:1");
        if (bets[0] == 0) {
            PlacedBet = "Basket: ";
        } else {
            PlacedBet = "Street Bet: ";
        }
        for (int i = 0; i < 3; i++) {
            PlacedBet.append(QString::number(bets[i]));
            PlacedBet.append(" ");
            if (bets[i] == randomNumber) {
                winnings = betAmount*11;
                ui->WinLabel->setText("You Win!");
                break;
            } else {
                winnings = -betAmount;
            }
        } balance += winnings;
        ui->BetLabel->setText(PlacedBet);
        break;
    case 4:
        ui->OddsLabel->setText("8:1");
        PlacedBet = "Corner Bet: ";
        for (int i = 0; i < 4; i++) {
            PlacedBet.append(QString::number(bets[i]));
            PlacedBet.append(" ");
            if (bets[i] == randomNumber) {
                winnings = betAmount*8;
                ui->WinLabel->setText("You Win!");
                break;
            } else {
                winnings = -betAmount;
            }
        } balance += winnings;
        ui->BetLabel->setText(PlacedBet);
        break;
    case 6:
        ui->OddsLabel->setText("5:1");
        PlacedBet = "Six Line Bet: ";
        for (int i = 0; i < 6; i++) {
            PlacedBet.append(QString::number(bets[i]));
            PlacedBet.append(" ");
            if (bets[i] == randomNumber) {
                winnings = betAmount*5;
                ui->WinLabel->setText("You Win!");
                break;
            } else {
                winnings = -betAmount;
            }
        } balance += winnings;
        ui->BetLabel->setText(PlacedBet);
        break;
    case 7:
        ui->OddsLabel->setText("2:1");
        if (bets[1]-bets[0] == 1) {
            PlacedBet = "Dozen Bet: ";
        } else {
            PlacedBet = "Column Bet: ";
        }
        for (int i = 0; i < 12; i++) {
            PlacedBet.append(QString::number(bets[i]));
            PlacedBet.append(" ");
            if (bets[i] == randomNumber) {
                winnings = betAmount*2;
                ui->WinLabel->setText("You Win!");
                break;
            } else {
                winnings = -betAmount;
            }
        } balance += winnings;
        ui->BetLabel->setText(PlacedBet);
        break;
    case 8:
        ui->OddsLabel->setText("1:1");
        if (bets[0] == 1 && bets[1] == 2) {
            PlacedBet = "Low Number Bet";
        } else if (bets[0] == 19 && bets[1] == 20) {
            PlacedBet = "High Number Bet";
        } else if (bets[4] == 9 && bets[5] == 11) {
            PlacedBet = "Odd Bet";
        } else if (bets[3] == 8 && bets[4] == 10) {
            PlacedBet = "Even Bet";
        } else if (bets[4] == 9 && bets[5] == 12) {
            PlacedBet = "Red";
        } else if (bets[3] == 8 && bets[5] == 11) {
            PlacedBet = "Black";
        }
        for (int i = 0; i < 18; i++) {
            if (bets[i] == randomNumber) {
                winnings = betAmount;
                ui->WinLabel->setText("You Win!");
                break;
            } else {
                winnings = -betAmount;
            }
        } balance += winnings;
        ui->BetLabel->setText(PlacedBet);
        break;
    default:
        winnings = 0;
        balance += winnings;
        ui->BetLabel->setText("Placed Bet: ");
        ui->WinLabel->setText("");
        ui->OddsLabel->setText("Payout: ");
        break;
    }

    ui->BetSlider->setRange(1, balance);

    ui->WalletLabel->setText("Balance: " + QString::number(balance));
    if (balance <= 0) {
        ui->Spin->setEnabled(false);
    }
}

void Roulette::on_Reset_clicked()
{
    ui->Spin->setEnabled(true);
    balance = 1000;
    ui->BetSlider->setRange(1, balance);
    ui->WalletLabel->setText("Balance: " + QString::number(balance));
    ui->WheelLabel->setPixmap(wheel.at(0));
    ui->WheelLabel->setScaledContents(true);
    ui->BetLabel->setText("Placed Bet: ");
    ui->WinLabel->setText("");
    ui->OddsLabel->setText("Payout:");
}

void Roulette::on_actionQuit_triggered()
{
    QApplication::quit();
}


void Roulette::on_Home_clicked()
{
    MainWindow *main = new MainWindow;
    main->show();
    this->hide();
}

void Roulette::textUpdate()
{
    switch(check) {
    case 1:
        ui->BetLabel->setText("Straight up: " + QString::number(bet));
        ui->OddsLabel->setText("35:1");
        break;
    case 2:
        ui->BetLabel->setText("Split Bet: " + QString::number(bets[0]) +" "+ QString::number(bets[1]));
        ui->OddsLabel->setText("17:1");
        break;
    case 3:
        ui->OddsLabel->setText("11:1");
        if (bets[0] == 0) {
            PlacedBet = "Basket: ";
        } else {
            PlacedBet = "Street Bet: ";
        }
        for (int i = 0; i < 3; i++) {
            PlacedBet.append(QString::number(bets[i]));
            PlacedBet.append(" ");
        }
        ui->BetLabel->setText(PlacedBet);
        break;
    case 4:
        ui->OddsLabel->setText("8:1");
        PlacedBet = "Corner Bet: ";
        for (int i = 0; i < 4; i++) {
            PlacedBet.append(QString::number(bets[i]));
            PlacedBet.append(" ");
        }
        ui->BetLabel->setText(PlacedBet);
        break;
    case 6:
        ui->OddsLabel->setText("5:1");
        PlacedBet = "Six Line Bet: ";
        for (int i = 0; i < 6; i++) {
            PlacedBet.append(QString::number(bets[i]));
            PlacedBet.append(" ");
        }
        ui->BetLabel->setText(PlacedBet);
        break;
    case 7:
        ui->OddsLabel->setText("2:1");
        if (bets[1]-bets[0] == 1) {
            PlacedBet = "Dozen Bet: ";
        } else {
            PlacedBet = "Column Bet: ";
        }
        for (int i = 0; i < 12; i++) {
            PlacedBet.append(QString::number(bets[i]));
            PlacedBet.append(" ");
        }
        ui->BetLabel->setText(PlacedBet);
        break;
    case 8:
        ui->OddsLabel->setText("1:1");
        if (bets[0] == 1 && bets[1] == 2) {
            PlacedBet = "Low Number Bet";
        } else if (bets[0] == 19 && bets[1] == 20) {
            PlacedBet = "High Number Bet";
        } else if (bets[4] == 9 && bets[5] == 11) {
            PlacedBet = "Odd Bet";
        } else if (bets[4] == 10 && bets[5] == 12) {
            PlacedBet = "Even Bet";
        } else if (bets[4] == 9 && bets[5] == 12) {
            PlacedBet = "Red";
        } else if (bets[4] == 10 && bets[5] == 11) {
            PlacedBet = "Black";
        }
        ui->BetLabel->setText(PlacedBet);
        break;
    default:
        ui->BetLabel->setText("Placed Bet: ");
        ui->WinLabel->setText("");
        ui->OddsLabel->setText("Payout: ");
        break;
    }
}

void Roulette::on_Bet00_clicked()
{
    bet = 0;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet01_clicked()
{
    bet = 1;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet02_clicked()
{
    bet = 2;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet03_clicked()
{
    bet = 3;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet04_clicked()
{
    bet = 4;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet05_clicked()
{
    bet = 5;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet06_clicked()
{
    bet = 6;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet07_clicked()
{
    bet = 7;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet08_clicked()
{
    bet = 8;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet09_clicked()
{
    bet = 9;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet10_clicked()
{
    bet = 10;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet11_clicked()
{
    bet = 11;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet12_clicked()
{
    bet = 12;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet13_clicked()
{
    bet = 13;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet14_clicked()
{
    bet = 14;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet15_clicked()
{
    bet = 15;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet16_clicked()
{
    bet = 16;
    check = 1;
}
void Roulette::on_Bet17_clicked()
{
    bet = 17;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet18_clicked()
{
    bet = 18;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet19_clicked()
{
    bet = 19;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet20_clicked()
{
    bet = 20;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet21_clicked()
{
    bet = 21;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet22_clicked()
{
    bet = 22;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet23_clicked()
{
    bet = 23;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet24_clicked()
{
    bet = 24;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet25_clicked()
{
    bet = 25;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet26_clicked()
{
    bet = 26;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet27_clicked()
{
    bet = 27;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet28_clicked()
{
    bet = 28;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet29_clicked()
{
    bet = 29;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet30_clicked()
{
    bet = 30;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet31_clicked()
{
    bet = 31;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet32_clicked()
{
    bet = 32;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet33_clicked()
{
    bet = 33;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet34_clicked()
{
    bet = 34;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet35_clicked()
{
    bet = 35;
    check = 1;
    textUpdate();
}
void Roulette::on_Bet36_clicked()
{
    bet = 36;
    check = 1;
    textUpdate();
}


void Roulette::on_Quad0_clicked()
{
    bets = new int[4]{0,1,2,3};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad1_clicked()
{
    bets = new int[4]{1,2,4,5};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad2_clicked()
{
    bets = new int[4]{2,3,5,6};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad3_clicked()
{
    bets = new int[4]{4,5,7,8};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad4_clicked()
{
    bets = new int[4]{5,6,8,9};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad5_clicked()
{
    bets = new int[4]{7,8,10,11};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad6_clicked()
{
    bets = new int[4]{8,9,11,12};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad7_clicked()
{
    bets = new int[4]{10,11,13,14};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad8_clicked()
{
    bets = new int[4]{11,12,14,15};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad9_clicked()
{
    bets = new int[4]{13,14,16,17};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad10_clicked()
{
    bets = new int[4]{14,15,17,18};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad11_clicked()
{
    bets = new int[4]{16,17,19,20};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad12_clicked()
{
    bets = new int[4]{17,18,20,21};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad13_clicked()
{
    bets = new int[4]{19,20,22,23};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad14_clicked()
{
    bets = new int[4]{20,21,23,24};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad15_clicked()
{
    bets = new int[4]{22,23,25,26};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad16_clicked()
{
    bets = new int[4]{23,24,26,27};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad17_clicked()
{
    bets = new int[4]{25,26,28,29};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad18_clicked()
{
    bets = new int[4]{26,27,29,30};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad19_clicked()
{
    bets = new int[4]{28,29,31,32};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad20_clicked()
{
    bets = new int[4]{29,30,32,33};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad21_clicked()
{
    bets = new int[4]{31,32,34,35};
    check = 4;
    textUpdate();
}
void Roulette::on_Quad22_clicked()
{
    bets = new int[4]{32,33,35,36};
    check = 4;
    textUpdate();
}


void Roulette::on_Street1_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+1;
    }
    check = 3;
    textUpdate();
}
void Roulette::on_Street2_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+4;
    }
    check = 3;
    textUpdate();
}
void Roulette::on_Street3_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+7;
    }
    check = 3;
    textUpdate();
}
void Roulette::on_Street4_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+10;
    }
    check = 3;
    textUpdate();
}
void Roulette::on_Street5_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+13;
    }
    check = 3;
}
void Roulette::on_Street6_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+1;
    }
    check = 16;
    textUpdate();
}
void Roulette::on_Street7_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+19;
    }
    check = 3;
    textUpdate();
}
void Roulette::on_Street8_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+22;
    }
    check = 3;
    textUpdate();
}
void Roulette::on_Street9_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+25;
    }
    check = 3;
    textUpdate();
}
void Roulette::on_Street10_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+28;
    }
    check = 3;
    textUpdate();
}
void Roulette::on_Street11_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+31;
    }
    check = 3;
    textUpdate();
}
void Roulette::on_Street12_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i+34;
    }
    check = 3;
    textUpdate();
}
void Roulette::on_Basket1_clicked()
{
    bets = new int[3];
    for (int i = 0; i<3; i++){
        bets[i] = i;
    }
    check = 3;
    textUpdate();
}
void Roulette::on_Basket2_clicked()
{
    bets = new int[3]{0,2,3};
    check = 3;
    textUpdate();
}


void Roulette::on_Six1_clicked()
{
    bets = new int[6];
    for (int i = 0; i<6; i++){
        bets[i] = i+1;
    }
    check = 6;
    textUpdate();
}
void Roulette::on_Six2_clicked()
{
    bets = new int[6];
    for (int i = 0; i<6; i++){
        bets[i] = i+4;
    }
    check = 6;
    textUpdate();
}
void Roulette::on_Six3_clicked()
{
    bets = new int[6];
    for (int i = 0; i<6; i++){
        bets[i] = i+7;
    }
    check = 6;
    textUpdate();
}
void Roulette::on_Six4_clicked()
{
    bets = new int[6];
    for (int i = 0; i<6; i++){
        bets[i] = i+10;
    }
    check = 6;
    textUpdate();
}
void Roulette::on_Six5_clicked()
{
    bets = new int[6];
    for (int i = 0; i<6; i++){
        bets[i] = i+13;
    }
    check = 6;
    textUpdate();
}
void Roulette::on_Six6_clicked()
{
    bets = new int[6];
    for (int i = 0; i<6; i++){
        bets[i] = i+16;
    }
    check = 6;
    textUpdate();
}
void Roulette::on_Six7_clicked()
{
    bets = new int[6];
    for (int i = 0; i<6; i++){
        bets[i] = i+19;
    }
    check = 6;
    textUpdate();
}
void Roulette::on_Six8_clicked()
{
    bets = new int[6];
    for (int i = 0; i<6; i++){
        bets[i] = i+22;
    }
    check = 6;
    textUpdate();
}
void Roulette::on_Six9_clicked()
{
    bets = new int[6];
    for (int i = 0; i<6; i++){
        bets[i] = i+25;
    }
    check = 6;
    textUpdate();
}
void Roulette::on_Six10_clicked()
{
    bets = new int[6];
    for (int i = 0; i<6; i++){
        bets[i] = i+28;
    }
    check = 6;
    textUpdate();
}
void Roulette::on_Six11_clicked()
{
    bets = new int[6];
    for (int i = 0; i<6; i++){
        bets[i] = i+31;
    }
    check = 6;
    textUpdate();
}



void Roulette::on_Row1_clicked()
{
    bets = new int[12];
    for (int i = 0, j = 1; i<12; i++, j = j + 3){
        bets[i] = j;
    }
    check = 7;
    textUpdate();
}
void Roulette::on_Row2_clicked()
{
    bets = new int[12];
    for (int i = 0, j = 2; i<12; i++, j = j + 3){
        bets[i] = j;
    }
    check = 7;
    textUpdate();

}
void Roulette::on_Row3_clicked()
{
    bets = new int[12];
    for (int i = 0, j = 3; i<12; i++, j = j + 3){
        bets[i] = j;
    }
    check = 7;
    textUpdate();

}
void Roulette::on_Dozen1_clicked()
{
    bets = new int[12];
    for (int i = 0; i<12; i++){
        bets[i] = i+1;
    }
    check = 7;
    textUpdate();
}
void Roulette::on_Dozen2_clicked()
{
    bets = new int[12];
    for (int i = 0; i<12; i++){
        bets[i] = i+13;
    }
    check = 7;
    textUpdate();
}
void Roulette::on_Dozen3_clicked()
{
    bets = new int[12];
    for (int i = 0; i<12; i++){
        bets[i] = i+25;
    }
    check = 7;
    textUpdate();
}



void Roulette::on_Odd_clicked()
{
    bets = new int[18];
    for (int i = 0, j = 1; i<18; i++, j = j + 2){
        bets[i] = j;
    }
    check = 8;
    textUpdate();
}
void Roulette::on_Even_clicked()
{
    bets = new int[18];
    for (int i = 0, j = 2; i<18; i++, j = j + 2){
        bets[i] = j;
    }
    check = 8;
    textUpdate();
}
void Roulette::on_Red_clicked()
{
    bets = new int[18]{1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36};
    check = 8;
    textUpdate();
}
void Roulette::on_Black_clicked()
{
    bets = new int[18]{2,4,6,8,10,11,13,15,17,20,22,24,26,28,29,31,33,35};
    check = 8;
    textUpdate();
}
void Roulette::on_Low_clicked()
{
    bets = new int[18];
    for (int i = 0; i<18; i++){
        bets[i] = i+1;
    }
    check = 8;
    textUpdate();
}
void Roulette::on_High_clicked()
{
    bets = new int[18];
    for (int i = 0; i<18; i++){
        bets[i] = i+19;
    }
    check = 8;
    textUpdate();
}

void Roulette::on_Split01_clicked()
{
    bets = new int[2]{0,1};
    check = 2;
    textUpdate();
}
void Roulette::on_Split02_clicked()
{
    bets = new int[2]{0,2};
    check = 2;
    textUpdate();
}
void Roulette::on_Split03_clicked()
{
    bets = new int[2]{0,3};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1011_clicked()
{
    bets = new int[2]{10,11};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1013_clicked()
{
    bets = new int[2]{10,13};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1112_clicked()
{
    bets = new int[2]{11,12};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1114_clicked()
{
    bets = new int[2]{11,14};
    check = 2;
    textUpdate();
}
void Roulette::on_Split12_clicked()
{
    bets = new int[2]{1,2};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1215_clicked()
{
    bets = new int[2]{12,15};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1314_clicked()
{
    bets = new int[2]{13,14};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1316_clicked()
{
    bets = new int[2]{13,16};
    check = 2;
    textUpdate();
}
void Roulette::on_Split14_clicked()
{
    bets = new int[2]{1,4};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1415_clicked()
{
    bets = new int[2]{14,15};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1417_clicked()
{
    bets = new int[2]{14,17};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1518_clicked()
{
    bets = new int[2]{15,18};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1617_clicked()
{
    bets = new int[2]{16,17};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1619_clicked()
{
    bets = new int[2]{16,19};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1718_clicked()
{
    bets = new int[2]{17,18};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1720_clicked()
{
    bets = new int[2]{17,20};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1821_clicked()
{
    bets = new int[2]{18,21};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1920_clicked()
{
    bets = new int[2]{19,20};
    check = 2;
    textUpdate();
}
void Roulette::on_Split1922_clicked()
{
    bets = new int[2]{19,22};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2021_clicked()
{
    bets = new int[2]{20,21};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2023_clicked()
{
    bets = new int[2]{20,23};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2124_clicked()
{
    bets = new int[2]{21,24};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2223_clicked()
{
    bets = new int[2]{22,23};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2225_clicked()
{
    bets = new int[2]{22,25};
    check = 2;
    textUpdate();
}
void Roulette::on_Split23_clicked()
{
    bets = new int[2]{2,3};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2324_clicked()
{
    bets = new int[2]{23,24};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2326_clicked()
{
    bets = new int[2]{23,26};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2427_clicked()
{
    bets = new int[2]{24,27};
    check = 2;
    textUpdate();
}
void Roulette::on_Split25_clicked()
{
    bets = new int[2]{2,5};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2526_clicked()
{
    bets = new int[2]{25,26};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2528_clicked()
{
    bets = new int[2]{25,28};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2627_clicked()
{
    bets = new int[2]{26,27};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2629_clicked()
{
    bets = new int[2]{26,29};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2730_clicked()
{
    bets = new int[2]{27,30};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2829_clicked()
{
    bets = new int[2]{28,29};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2831_clicked()
{
    bets = new int[2]{28,31};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2930_clicked()
{
    bets = new int[2]{29,30};
    check = 2;
    textUpdate();
}
void Roulette::on_Split2932_clicked()
{
    bets = new int[2]{29,32};
    check = 2;
    textUpdate();
}
void Roulette::on_Split3033_clicked()
{
    bets = new int[2]{30,33};
    check = 2;
    textUpdate();
}
void Roulette::on_Split3132_clicked()
{
    bets = new int[2]{31,32};
    check = 2;
    textUpdate();
}
void Roulette::on_Split3134_clicked()
{
    bets = new int[2]{31,34};
    check = 2;
    textUpdate();
}
void Roulette::on_Split3233_clicked()
{
    bets = new int[2]{32,33};
    check = 2;
    textUpdate();
}
void Roulette::on_Split3235_clicked()
{
    bets = new int[2]{32,35};
    check = 2;
    textUpdate();
}
void Roulette::on_Split3336_clicked()
{
    bets = new int[2]{33,36};
    check = 2;
    textUpdate();
}
void Roulette::on_Split3435_clicked()
{
    bets = new int[2]{34,35};
    check = 2;
    textUpdate();
}
void Roulette::on_Split3536_clicked()
{
    bets = new int[2]{35,36};
    check = 2;
    textUpdate();
}
void Roulette::on_Split36_clicked()
{
    bets = new int[2]{3,6};
    check = 2;
    textUpdate();
}
void Roulette::on_Split45_clicked()
{
    bets = new int[2]{4,5};
    check = 2;
    textUpdate();
}
void Roulette::on_Split47_clicked()
{
    bets = new int[2]{4,7};
    check = 2;
    textUpdate();
}
void Roulette::on_Split56_clicked()
{
    bets = new int[2]{5,6};
    check = 2;
    textUpdate();
}
void Roulette::on_Split58_clicked()
{
    bets = new int[2]{5,8};
    check = 2;
    textUpdate();
}
void Roulette::on_Split69_clicked()
{
    bets = new int[2]{6,9};
    check = 2;
    textUpdate();
}
void Roulette::on_Split710_clicked()
{
    bets = new int[2]{7,10};
    check = 2;
    textUpdate();
}
void Roulette::on_Split78_clicked()
{
    bets = new int[2]{7,8};
    check = 2;
    textUpdate();
}
void Roulette::on_Split811_clicked()
{
    bets = new int[2]{8,11};
    check = 2;
    textUpdate();
}
void Roulette::on_Split89_clicked()
{
    bets = new int[2]{8,9};
    check = 2;
    textUpdate();
}
void Roulette::on_Split912_clicked()
{
    bets = new int[2]{9,12};
    check = 2;
    textUpdate();
}




