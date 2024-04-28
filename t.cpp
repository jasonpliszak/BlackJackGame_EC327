#include "t.h"
#include "ui_t.h"

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
