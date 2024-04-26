#include "game.h"
#include "ui_game.h"
#include "card.h"
#include "deck.h"
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QList>
#include <map>
#include <string>

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

//load in card images
void Game::loadDeck(){
    //insert load deck function here that intializes a list of card images


}




Game::~Game()
{
    delete ui;
}
