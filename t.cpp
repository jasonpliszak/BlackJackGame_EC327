#include "t.h"
#include "ui_t.h"
#include "game.h"
#include "mainwindow.h"

T::T(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::T)
{
    ui->setupUi(this);
    QPixmap pix(":/images/lose.jpeg");
    ui->TScreen->setPixmap(pix);
    ui->TScreen->lower();
}

T::~T()
{
    delete ui;
}

void T::on_Play_Again2_clicked()
{
    Game *game = new Game;
    game->show();
    this->hide();
}



void T::on_Return_Home2_clicked()
{
    MainWindow *main = new MainWindow;
    main->show();
    this->hide();
}

