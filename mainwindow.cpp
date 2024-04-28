#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
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
    this->hide();
}

