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


}

void Game::on_Deal_clicked(){
    QPixmap card0(":/images/cardback.gif");


    card p1 = Deck.draw();
    ui->PC1->setPixmap(p1.getImg());
    User.addCard(p1);

    card p2 = Deck.draw();
    ui->PC2->setPixmap(p2.getImg());
    User.addCard(p2);
    int pscore = User.getVal();
    ui->PlayerScore->setText("Score: " + QString::number(pscore));


    card d1 = Deck.draw();
    ui->DC1->setPixmap(d1.getImg());
    House.addCard(d1);

    card d2 = Deck.draw();
    ui->DC2->setPixmap(card0);
    House.addCard(d2);

    ui->Deal->setDisabled(true);
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
    }
}


Game::~Game()
{
    delete ui;
}

