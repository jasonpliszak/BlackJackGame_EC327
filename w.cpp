#include "w.h"
#include "ui_w.h"

W::W(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::W)
{
    ui->setupUi(this);
}

W::~W()
{
    delete ui;
}
