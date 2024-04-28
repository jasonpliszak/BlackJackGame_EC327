#include "game.h"
#include "ui_game.h"
#include "card.h"
#include "deck.h"
#include "player.h"
#include <QApplication>
#include <QString>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QList>
#include "l.h"
#include <QTimer>
#include "t.h"
#include "w.h"

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
}

void Game::on_Deal_clicked(){
    QPixmap card0(":/images/cardback.png"); //initialize cardback image for first dealer card

    //draw player cards
    card p1 = Deck.draw();
    ui->PC1->setPixmap(p1.getImg()); //sets image with first player card
    User.addCard(p1);

    card p2 = Deck.draw();
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

    ui->Deal->setDisabled(true); //disable deal button
    ui->Hit->setDisabled(false); //enable hit
    ui->Stand->setDisabled(false); //enable stand

    //auto-blackjack logic (if player or dealer draw blackjack from the deal button)
    if(House.getVal()==21 && User.getVal()==21){
        ui->DC1->setPixmap(d1.getImg());
        int dscore = House.getVal();
        ui->Dealer->setText("Score: " + QString::number(dscore));
        ui->Hit->setDisabled(true);
        ui->Stand->setDisabled(true);
        QTimer::singleShot(1500, this, &Game::delayedTie); //allows you to see the cards for 1.5 sec before being sent to game over
    }
    else if(House.getVal()==21 && User.getVal()!=21){
        ui->DC1->setPixmap(d1.getImg());
        int dscore = House.getVal();
        ui->Dealer->setText("Score: " + QString::number(dscore));
        ui->Hit->setDisabled(true);
        ui->Stand->setDisabled(true);
        QTimer::singleShot(1500, this, &Game::delayedLose);
    }
    else if(User.getVal() == 21 && House.getVal()!=21){
        ui->DC1->setPixmap(d1.getImg());
        int dscore = House.getVal();
        ui->Dealer->setText("Score: " + QString::number(dscore));
        ui->Hit->setDisabled(true);
        ui->Stand->setDisabled(true);
        QTimer::singleShot(1500, this, &Game::delayedWin);
    }
}

void Game::on_Hit_clicked(){
    hitcounter++; //amount of times hit has been pressed
    int pscore = 0;
    //initialize cards outside of case statement (these are all test cards that cannot affect score value)
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
    switch(hitcounter){
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
    if(User.getVal()>21){
        ui->Hit->setDisabled(true);
        ui->Stand->setDisabled(true);
        QTimer::singleShot(1500, this, &Game::delayedLose);
    }
}

void Game::on_Stand_clicked(){
    ui->Hit->setDisabled(true);
    ui->Stand->setDisabled(true);
    ui->DC1->setPixmap(House.getCards()[0].getImg()); //replace cardback image with image of the first dealer card
    int dscore = House.getVal();
    ui->Dealer->setText("Score: " + QString::number(dscore)); //show dealer hand value

    //dealer draws if their value is too low
    while(dscore<17){
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
        switch(dhit){
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
    if(dscore>21){ //dealer bust
        QTimer::singleShot(1500, this, &Game::delayedWin);
    }
    else if(dscore == User.getVal()){ //because auto blackjacks are already processed (you cannot stand if you get a blackjack on draw)
         QTimer::singleShot(1500, this, &Game::delayedTie);
    }
    else if(dscore > User.getVal()){ //because auto blackjacks are already processed (you cannot stand if you get a blackjack on draw)
        QTimer::singleShot(1500, this, &Game::delayedLose);
    }
    else if(dscore < User.getVal()){ //because auto blackjacks are already processed (you cannot stand if you get a blackjack on draw)
        QTimer::singleShot(1500, this, &Game::delayedWin);
    }
}

//delayed game over screen functions to use with QTimer::singleShot()
void Game::delayedLose(){
            L *lose = new L;
            lose->show();
            this->hide();
    }

void Game::delayedTie(){
    T *tie = new T;
    tie->show();
    this->hide();
}

void Game::delayedWin(){
    W *win = new W;
    win->show();
    this->hide();
}

Game::~Game()
{
    delete ui;
}

