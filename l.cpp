#include "l.h"
#include "ui_l.h"
#include "game.h"

L::L(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::L)
{
    ui->setupUi(this);
    QPixmap pix(":/images/lose.jpeg");
    ui->Lscreen->setPixmap(pix);
    ui->Lscreen->lower();
}

L::~L()
{
    delete ui;
}

void L::on_Play_Again_clicked()
{
    Game *game = new Game;
    game->show();
    this->hide();
}

