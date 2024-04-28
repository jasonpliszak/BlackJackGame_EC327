#include "w.h"
#include "ui_w.h"
#include "game.h"
#include "mainwindow.h"

W::W(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::W)
{
    ui->setupUi(this);
    QPixmap pix(":/images/lose.jpeg");
    ui->Wscreen->setPixmap(pix);
    ui->Wscreen->lower();
}

W::~W()
{
    delete ui;
}

void W::on_Play_Again1_clicked()
{
    Game *game = new Game;
    game->show();
    this->hide();
}



void W::on_pushButton_2_clicked()
{
    MainWindow *main = new MainWindow;
    main->show();
    this->hide();
}

