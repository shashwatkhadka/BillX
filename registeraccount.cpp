#include "registeraccount.h"
#include "ui_registeraccount.h"
#include "mainwindow.h"

RegisterAccount::RegisterAccount(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterAccount)
{
    ui->setupUi(this);
    MainWindow conn;
    if (!conn.connectionStart())
        ui -> label_registeraccount_connectionstatus -> setText("Database Fail");
    else
        ui ->label_registeraccount_connectionstatus-> setText("Database Connected");
}

RegisterAccount::~RegisterAccount()
{
    delete ui;
}
