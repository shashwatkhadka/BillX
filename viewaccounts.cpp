#include "viewaccounts.h"
#include "ui_viewaccounts.h"

ViewAccounts::ViewAccounts(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ViewAccounts)
{
    ui->setupUi(this);
}

ViewAccounts::~ViewAccounts()
{
    delete ui;
}
