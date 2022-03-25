#include "dashboard.h"
#include "ui_dashboard.h"

Dashboard::Dashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);
}

Dashboard::~Dashboard()
{
    delete ui;
}



void Dashboard::on_createbillbutton_clicked()
{
    cb= new CreateBill(this);
    cb->show();
}


void Dashboard::on_inventorybutton_clicked()
{
    iv= new Inventory(this);
    iv->show();
}


void Dashboard::on_viewaccountbutton_clicked()
{
    va= new ViewAccounts(this);
    va->show();
}


void Dashboard::on_registerbutton_clicked()
{
    ra= new RegisterAccount(this);
    ra->show();
}

