#include "t.h"
#include "ui_t.h"

T::T(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::T)
{
    ui->setupUi(this);
}

T::~T()
{
    delete ui;
}
