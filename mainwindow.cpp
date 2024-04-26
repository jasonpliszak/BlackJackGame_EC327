#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton *button = new QPushButton("Play BlackJack", this);
    setCentralWidget(button);

    // Connect the button's clicked signal to slot
    connect(button, &QPushButton::clicked, this, &MainWindow::on_play_button_clicked);


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

