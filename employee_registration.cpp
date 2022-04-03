#include "employee_registration.h"
#include "ui_employee_registration.h"
#include "mainwindow.h"
#include <QMessageBox>

employee_registration::employee_registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employee_registration)
{
    ui->setupUi(this);
}

employee_registration::~employee_registration()
{
    delete ui;
}

void employee_registration::on_pushButton_register_clicked()
{
    QString firstname,lastname,phonenumber,password,registrationtype;
    firstname = ui->lineEdit_firstname->text();
    lastname = ui->lineEdit_lastname->text();
    phonenumber = ui->lineEdit_phonenumber->text();
    password = ui->lineEdit_password->text();

    registrationtype='E';

    MainWindow conn;
    if(!conn.connectionStart()){
        qDebug()<<"Failed to open database";
        return;
    }

    conn.connectionStart();

    QSqlQuery registerqry;
    registerqry.prepare("INSERT INTO reg_database (FirstName,LastName,PhoneNumber,Password,RegType) VALUES(:firstname, :lastname, :phonenumber, :password, :registrationtype)");
    registerqry.bindValue(":firstname", firstname);
    registerqry.bindValue(":lastname", lastname);
    registerqry.bindValue(":phonenumber", phonenumber);
    registerqry.bindValue(":password", password);
    registerqry.bindValue(":registrationtype", registrationtype);

    if (registerqry.exec()){
        QMessageBox::information(this,"Register","Successfully Registered!");
        conn.connectionClose();
        this->hide();
    }
    else{
         QMessageBox::critical(this,tr("Error"),registerqry.lastError().text());
    }
}

