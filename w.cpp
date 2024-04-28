#include "w.h"
#include "ui_w.h"

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
