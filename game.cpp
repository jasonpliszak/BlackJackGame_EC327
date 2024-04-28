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
#include <map>
#include <string>
#include <time.h>
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
    QPixmap pix(":/images/bjtable.jpg");
    ui->Background->setPixmap(pix);
    ui->Background->lower();
    ui->Hit->setDisabled(true);
    ui->Stand->setDisabled(true);
}

void Game::on_Deal_clicked(){
    QPixmap card0(":/images/cardback.png");


    card p1 = Deck.draw();
    ui->PC1->setPixmap(p1.getImg());
    User.addCard(p1);

    card p2 = Deck.draw();
    ui->PC2->setPixmap(p2.getImg());
    User.addCard(p2);
    int pscore = User.getVal();
    ui->PlayerScore->setText("Score: " + QString::number(pscore));


    card d1 = Deck.draw();
    ui->DC1->setPixmap(card0);
    House.addCard(d1);

    card d2 = Deck.draw();
    ui->DC2->setPixmap(d2.getImg());
    House.addCard(d2);

    ui->Deal->setDisabled(true);
    ui->Hit->setDisabled(false);
    ui->Stand->setDisabled(false);

    if(House.getVal()==21 && User.getVal()==21){
        ui->DC1->setPixmap(d1.getImg());
        int dscore = House.getVal();
        ui->Dealer->setText("Score: " + QString::number(dscore));
        ui->Hit->setDisabled(true);
        QTimer::singleShot(1500, this, &Game::delayedTie);
    }
    else if(House.getVal()==21 && User.getVal()!=21){
        ui->DC1->setPixmap(d1.getImg());
        int dscore = House.getVal();
        ui->Dealer->setText("Score: " + QString::number(dscore));
        ui->Hit->setDisabled(true);
        QTimer::singleShot(1500, this, &Game::delayedLose);
    }
    else if(User.getVal() == 21 && House.getVal()!=21){
        ui->DC1->setPixmap(d1.getImg());
        int dscore = House.getVal();
        ui->Dealer->setText("Score: " + QString::number(dscore));
        ui->Hit->setDisabled(true);
        QTimer::singleShot(1500, this, &Game::delayedWin);
    }
}

void Game::on_Hit_clicked(){
    hitcounter++;
    int pscore = 0;
    card p3;
    card p4;
    card p5;
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
        ui->Hit->setDisabled(true);
        break;
    }
    if(User.getVal()>21){
        ui->Hit->setDisabled(true);
        ui->Stand->setDisabled(true);
        QTimer::singleShot(1500, this, &Game::delayedLose);
    }
}

void Game::on_Stand_clicked(){
    ui->Hit->setDisabled(true);
    ui->Stand->setDisabled(true);
    ui->DC1->setPixmap(House.getCards()[0].getImg());
    int dscore = House.getVal();
    ui->Dealer->setText("Score: " + QString::number(dscore));
    while(dscore<17){
        int dhit = 0;
        card d3;
        card d4;
        card d5;
        card d6;
        card d7;
        card d8;
        card d9;
        card d10;
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
    if(dscore>21){
        QTimer::singleShot(1500, this, &Game::delayedWin);
    }
    else if(dscore == User.getVal()){
         QTimer::singleShot(1500, this, &Game::delayedTie);
    }
    else if(dscore > User.getVal()){
        QTimer::singleShot(1500, this, &Game::delayedLose);
    }
    else if(dscore < User.getVal()){
        QTimer::singleShot(1500, this, &Game::delayedWin);
    }
}

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

