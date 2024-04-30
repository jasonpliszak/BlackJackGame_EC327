#include "game.h"
#include <QApplication>
#include <QList>
#include <QPushButton>
#include <QSlider>
#include <QString>
#include <QTimer>
#include <QVBoxLayout>
#include <QWidget>
#include "card.h"
#include "deck.h"
#include "global.h"
#include "l.h"
#include "player.h"
#include "ui_game.h"
#include "mainwindow.h"

using namespace std;

Game::Game(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Game)
{
    //set background of widget to table felt
    ui->setupUi(this);
    QPixmap pix(":/images/bg.png");
    ui->Background->setPixmap(pix);
    ui->Background->lower();
    ui->Hit->setDisabled(true);
    ui->Stand->setDisabled(true);
    ui->Split->setDisabled(true);
    ui->Deal->setDisabled(true);

    ui->BetSlider->setRange(1, money); // Set the range
}

void Game::on_Deal_clicked()
{
    QPixmap card0(":/images/cardback.png"); //initialize cardback image for first dealer card

    ui->BetSlider->hide();
    ui->BetSlider->setDisabled(true);
    money -= bet;
    ui->BalanceLabel->setText("Balance: $" + QString::number(money));
    //draw player cards
    card p1 = Deck.draw();
    ui->PC1->setPixmap(p1.getImg()); //sets image with first player card
    User.addCard(p1);

    card p2 = Deck.draw(); //FIX THIS WHEN DONE WITH SPLIT TESTING
    ui->PC2->setPixmap(p2.getImg());
    User.addCard(p2);
    int pscore = User.getVal();
    ui->PlayerScore->setText("Score: " + QString::number(pscore)); //sets player score text

    //draw dealer cards
    card d1 = Deck.draw();
    ui->DC1->setPixmap(card0); //set image of first player card to facedown
    House.addCard(d1);

    card d2 = Deck.draw();
    ui->DC2->setPixmap(d2.getImg());
    House.addCard(d2);

    ui->Deal->setDisabled(true);   //disable deal button
    ui->Hit->setDisabled(false);   //enable hit
    ui->Stand->setDisabled(false); //enable stand

    //auto-blackjack logic (if player or dealer draw blackjack from the deal button)
    if (House.getVal() == 21 && User.getVal() == 21) {
        ui->DC1->setPixmap(d1.getImg());
        int dscore = House.getVal();
        ui->Dealer->setText("Score: " + QString::number(dscore));
        ui->Hit->setDisabled(true);
        ui->Stand->setDisabled(true);
        QTimer::singleShot(
            1500,
            this,
            &Game::delayedTie); //allows you to see the cards for 1.5 sec before being sent to game over
    } else if (House.getVal() == 21 && User.getVal() != 21) {
        ui->DC1->setPixmap(d1.getImg());
        int dscore = House.getVal();
        ui->Dealer->setText("Score: " + QString::number(dscore));
        ui->Hit->setDisabled(true);
        ui->Stand->setDisabled(true);
        QTimer::singleShot(1500, this, &Game::delayedLose);
    } else if (User.getVal() == 21 && House.getVal() != 21) {
        ui->DC1->setPixmap(d1.getImg());
        int dscore = House.getVal();
        ui->Dealer->setText("Score: " + QString::number(dscore));
        ui->Hit->setDisabled(true);
        ui->Stand->setDisabled(true);
        QTimer::singleShot(1500, this, &Game::delayedBJW);
    }
    if ((p1.getRank() == p2.getRank() && money >= bet)) {
        ui->Split->setDisabled(false);
    }
}

void Game::on_Split_clicked()
{
    splitFlag = true;
    endCallFlag = false;
    ui->Split->setDisabled(true);
    money = money - bet;
    bet = 2 * bet;
    ui->BetValue->setText("Bet Value: $" + QString::number(bet));
    ui->BalanceLabel->setText("Balance: $" + QString::number(money));
    QPixmap bcard(":/images/blank.png");
    card s1 = User.getCards()[1];
    User.removeCard();
    ui->PC2->setPixmap(bcard);
    split.addCard(s1);
    ui->SC1->setPixmap(s1.getImg());
    ui->PlayerScore->setText("Score: " + QString::number(User.getVal()));
    ui->SplitScore->setText("Score: " + QString::number(split.getVal()));
    hitcounter--; //hitcounter decrement to ensure on_Hit_clicked() works for split hand
}

void Game::on_Hit_clicked()
{
    hitcounter++; //amount of times hit has been pressed
    int pscore = 0;
    if (!splitFlag) {
        ui->Split->setDisabled(true);
    }
    //initialize cards outside of case statement (these are all test cards that cannot affect score value)
    if (spStandFlag) {
        int sscore = 0;
        card s2;
        card s3;
        card s4;
        card s5;
        card s6;

        switch (hitcounter) {
        case 1:
            s2 = Deck.draw();
            ui->SC2->setPixmap(s2.getImg());
            split.addCard(s2);
            sscore = split.getVal();
            ui->SplitScore->setText("Score: " + QString::number(sscore));
            break;
        case 2:
            s3 = Deck.draw();
            ui->SC3->setPixmap(s3.getImg());
            split.addCard(s3);
            sscore = split.getVal();
            ui->SplitScore->setText("Score: " + QString::number(sscore));
            break;
        case 3:
            s4 = Deck.draw();
            ui->SC4->setPixmap(s4.getImg());
            split.addCard(s4);
            sscore = split.getVal();
            ui->SplitScore->setText("Score: " + QString::number(sscore));
            break;
        case 4:
            s5 = Deck.draw();
            ui->SC5->setPixmap(s5.getImg());
            split.addCard(s5);
            sscore = split.getVal();
            ui->SplitScore->setText("Score: " + QString::number(sscore));
            break;
        case 5:
            s6 = Deck.draw();
            ui->SC6->setPixmap(s6.getImg());
            split.addCard(s6);
            sscore = split.getVal();
            ui->SplitScore->setText("Score: " + QString::number(sscore));
            break;
        }
        if (split.getVal() > 21) {
            ui->Hit->setDisabled(true);
            splitFlag = 0;
            if (endCallFlag) {
                ui->Stand->setDisabled(true);
            }
            QTimer::singleShot(1500, this, &Game::delayedLose);
        }
        return;
    }
    card p2; //if split
    card p3;
    card p4;
    card p5;
    card p6;
    card p7;
    card p8;
    card p9;
    card p10;
    card p11; //11 cards to catch the most extreme edge case of four A, four 2, three 3

    //switch statement to handle multiple hits as needed
    switch (hitcounter) {
    case 0: //if split
        p2 = Deck.draw();
        ui->PC2->setPixmap(p2.getImg());
        User.addCard(p2);
        pscore = User.getVal();
        ui->PlayerScore->setText("Score: " + QString::number(pscore));
        break;
    case 1:
        p3 = Deck.draw();
        ui->PC3->setPixmap(p3.getImg());
        User.addCard(p3);
        pscore = User.getVal();
        ui->PlayerScore->setText("Score: " + QString::number(pscore));
        break;
    case 2:
        p4 = Deck.draw();
        ui->PC4->setPixmap(p4.getImg());
        User.addCard(p4);
        pscore = User.getVal();
        ui->PlayerScore->setText("Score: " + QString::number(pscore));
        break;
    case 3:
        p5 = Deck.draw();
        ui->PC5->setPixmap(p5.getImg());
        User.addCard(p5);
        pscore = User.getVal();
        ui->PlayerScore->setText("Score: " + QString::number(pscore));
        break;
    case 4:
        p6 = Deck.draw();
        ui->PC6->setPixmap(p6.getImg());
        User.addCard(p6);
        pscore = User.getVal();
        ui->PlayerScore->setText("Score: " + QString::number(pscore));
        break;
    case 5:
        p7 = Deck.draw();
        ui->PC7->setPixmap(p7.getImg());
        User.addCard(p7);
        pscore = User.getVal();
        ui->PlayerScore->setText("Score: " + QString::number(pscore));
        break;
    case 6:
        p8 = Deck.draw();
        ui->PC8->setPixmap(p8.getImg());
        User.addCard(p8);
        pscore = User.getVal();
        ui->PlayerScore->setText("Score: " + QString::number(pscore));
        break;
    case 7:
        p9 = Deck.draw();
        ui->PC9->setPixmap(p9.getImg());
        User.addCard(p9);
        pscore = User.getVal();
        ui->PlayerScore->setText("Score: " + QString::number(pscore));
        break;
    case 8:
        p10 = Deck.draw();
        ui->PC10->setPixmap(p10.getImg());
        User.addCard(p10);
        pscore = User.getVal();
        ui->PlayerScore->setText("Score: " + QString::number(pscore));
        break;
    case 9:
        p11 = Deck.draw();
        ui->PC11->setPixmap(p11.getImg());
        User.addCard(p11);
        pscore = User.getVal();
        ui->PlayerScore->setText("Score: " + QString::number(pscore));
        ui->Hit->setDisabled(true); //you can only have 11 cards at most
        break;
    }
    //bust logic
    if (User.getVal() > 21) {
        if (splitFlag) {
            spStandFlag = true;
            QTimer::singleShot(1500, this, &Game::delayedLose);
            hitcounter = 0;
            return;
        }
        ui->Hit->setDisabled(true);
        ui->Stand->setDisabled(true);
        QTimer::singleShot(1500, this, &Game::delayedLose);
    }
}

void Game::on_Stand_clicked()
{
    if (splitFlag && !spStandFlag) {
        spStandFlag = true;
        hitcounter = 0;
        return;
    }
    if (!splitFlag) {
        ui->Split->setDisabled(true);
    }

    if ((splitFlag == false) or (splitFlag == true && spStandFlag == true)) {
        ui->Hit->setDisabled(true);
        ui->Stand->setDisabled(true);
        ui->DC1->setPixmap(
            House.getCards()[0].getImg()); //replace cardback image with image of the first dealer card
        int dscore = House.getVal();
        ui->Dealer->setText("Score: " + QString::number(dscore)); //show dealer hand value

        //dealer draws if their value is too low
        while (dscore < 17) {
            int dhit = 0;
            card d3;
            card d4;
            card d5;
            card d6;
            card d7;
            card d8;
            card d9;
            card d10; //10 cards to handle the extreme edge case of four A, four 2, two 3 for a total of 18
            dhit++;
            switch (dhit) {
            case 1:
                d3 = Deck.draw();
                ui->DC3->setPixmap(d3.getImg());
                House.addCard(d3);
                dscore = House.getVal();
                ui->Dealer->setText("Score: " + QString::number(dscore));
                break;
            case 2:
                d4 = Deck.draw();
                ui->DC3->setPixmap(d4.getImg());
                House.addCard(d4);
                dscore = House.getVal();
                ui->Dealer->setText("Score: " + QString::number(dscore));
                break;
            case 3:
                d5 = Deck.draw();
                ui->DC3->setPixmap(d5.getImg());
                House.addCard(d5);
                dscore = House.getVal();
                ui->Dealer->setText("Score: " + QString::number(dscore));
                break;
            case 4:
                d6 = Deck.draw();
                ui->DC3->setPixmap(d6.getImg());
                House.addCard(d6);
                dscore = House.getVal();
                ui->Dealer->setText("Score: " + QString::number(dscore));
                break;
            case 5:
                d7 = Deck.draw();
                ui->DC3->setPixmap(d7.getImg());
                House.addCard(d7);
                dscore = House.getVal();
                ui->Dealer->setText("Score: " + QString::number(dscore));
                break;
            case 6:
                d8 = Deck.draw();
                ui->DC3->setPixmap(d8.getImg());
                House.addCard(d8);
                dscore = House.getVal();
                ui->Dealer->setText("Score: " + QString::number(dscore));
                break;
            case 7:
                d9 = Deck.draw();
                ui->DC3->setPixmap(d9.getImg());
                House.addCard(d9);
                dscore = House.getVal();
                ui->Dealer->setText("Score: " + QString::number(dscore));
                break;
            case 8:
                d10 = Deck.draw();
                ui->DC3->setPixmap(d10.getImg());
                House.addCard(d10);
                dscore = House.getVal();
                ui->Dealer->setText("Score: " + QString::number(dscore));
                break;
            }
        }
        if (dscore > 21 && User.getVal() <= 21) { //dealer bust
            QTimer::singleShot(1500, this, &Game::delayedWin);
        } else if (dscore == User.getVal()
                   && User.getVal() <= 21) { //ensures bust from split hand not counted
            QTimer::singleShot(1500, this, &Game::delayedTie);
        } else if (dscore > User.getVal()
                   && User.getVal() <= 21) { //ensures bust from split hand not counted
            QTimer::singleShot(1500, this, &Game::delayedLose);
        } else if (dscore < User.getVal()
                   && User.getVal() <= 21) { //ensures bust from split hand not counted
            QTimer::singleShot(1500, this, &Game::delayedWin);
        }
        //implement code to check against split hand if split flag is true
        if (splitFlag) {
            if (dscore > 21 && split.getVal() <= 21) { //dealer bust
                QTimer::singleShot(1500, this, &Game::delayedWin);
            } else if (dscore == split.getVal()) { //ensures bust from split hand not counted
                QTimer::singleShot(1500, this, &Game::delayedTie);
            } else if (dscore > split.getVal()) { //ensures bust from split hand not counted
                QTimer::singleShot(1500, this, &Game::delayedLose);
            } else if (dscore < split.getVal()) { //ensures bust from split hand not counted
                QTimer::singleShot(1500, this, &Game::delayedWin);
            }
        }
    }
}

//delayed game over screen functions to use with QTimer::singleShot()
void Game::delayedLose()
{
    if (!endCallFlag) {
        bet = bet / 2;
        ui->BetValue->setText("Bet Value: $" + QString::number(bet));
        ui->BalanceLabel->setText("Balance: $" + QString::number(money));
        endCallFlag = true;
        return;
    }
    L *gameover = new L;
    gameover->show();
    this->hide();
}

void Game::delayedTie()
{
    if (!endCallFlag) {
        money = money + bet / 2;
        bet = bet / 2;
        ui->BetValue->setText("Bet Value: $" + QString::number(bet));
        ui->BalanceLabel->setText("Balance: $" + QString::number(money));
        endCallFlag = true;
        return;
    }
    money += bet;
    L *gameover = new L;
    gameover->show();
    this->hide();
}

void Game::delayedWin()
{
    if (!endCallFlag) {
        money = money + bet;
        bet = bet / 2;
        ui->BetValue->setText("Bet Value: $" + QString::number(bet));
        ui->BalanceLabel->setText("Balance: $" + QString::number(money));
        endCallFlag = true;
        return;
    }
    money = money + (2 * bet);
    L *gameover = new L;
    gameover->show();
    this->hide();
}

void Game::delayedBJW()
{
    L *gameover = new L;
    money = money + (1.5 * bet);
    gameover->show();
    this->hide();
}

Game::~Game()
{
    delete ui;
}

void Game::on_BetSlider_valueChanged(int value)
{
    bet = value;
    ui->BetValue->setText("Bet Value: $" + QString::number(bet));
    if (bet != 0) {
        ui->Deal->setDisabled(false);
    }
}

void Game::on_Home_clicked()
{
    MainWindow *main = new MainWindow;
    main->show();
    this->hide();
}
