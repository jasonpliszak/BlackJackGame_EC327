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
    deck Deck;

    card p1 = Deck.draw();
    p1.flip();
    ui->PC1->setPixmap(p1.getImg());
    player User(p1);

    card p2 = Deck.draw();
    p2.flip();
    ui->PC2->setPixmap(p1.getImg());
    User.addCard(p2);
    int pscore = User.getVal();
    ui->PlayerScore->setText("Score" + QString::number(pscore));


    card d1 = Deck.draw();
    d1.flip();
    ui->DC1->setPixmap(d1.getImg());
    player House(d1);

    card d2 = Deck.draw();
    ui->DC2->setPixmap(card0);
    House.addCard(d2);
}




Game::~Game()
{
    delete ui;
}

