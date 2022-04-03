#include "registerdialog.h"
#include "ui_registerdialog.h"

registerDialog::registerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerDialog)
{
    ui->setupUi(this);
}

registerDialog::~registerDialog()
{
    delete ui;
}

void registerDialog::on_pushButton_member_clicked()
{
    mr= new member_registration(this);
    mr->show();
}


void registerDialog::on_pushButton_employee_clicked()
{
    er= new employee_registration(this);
    er->show();
}

