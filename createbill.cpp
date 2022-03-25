#include "createbill.h"
#include "ui_createbill.h"

CreateBill::CreateBill(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateBill)
{
    ui->setupUi(this);
}

CreateBill::~CreateBill()
{
    delete ui;
}
