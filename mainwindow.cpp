#include "mainwindow.h"
#include <QPushButton>
#include <QString>
#include "game.h"
#include "roulette.h"
#include "global.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    money = 1000;
    ui->setupUi(this);
    QPushButton *play_button = new QPushButton;
    QPixmap pix(":/images/homescreen.png");
    ui->home_screen->setPixmap(pix);
    ui->home_screen->lower();

    // Connect the button's clicked signal to slot
    connect(play_button, &QPushButton::clicked, this, &MainWindow::on_play_button_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_play_button_clicked()
{
    Game *game = new Game;
    game->show();
    this->close();
}

void MainWindow::on_play_roulette_clicked()
{
    Roulette *roulette = new Roulette;
    roulette->show();
    this->close();
}
