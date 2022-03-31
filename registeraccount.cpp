#include "registeraccount.h"
#include "ui_registeraccount.h"
#include "mainwindow.h"
#include <QMessageBox>

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

void RegisterAccount::on_pushButton_register_clicked()
{
    QString firstname,lastname,phonenumber,password,registrationtype;
    firstname = ui->lineEdit_firstname->text();
    lastname = ui->lineEdit_lastname->text();
    phonenumber = ui->lineEdit_phonenumber->text();
    password = ui->lineEdit_password->text();

    if(ui->radioButton_employee->isChecked()){
        registrationtype='E';
    }
    else if(ui->radioButton_member->isChecked()){
        registrationtype='M';
    }

    MainWindow conn;
    if(!conn.connectionStart()){
        qDebug()<<"Failed to open database";
        return;
    }

    conn.connectionStart();

    QSqlQuery registerqry;
    registerqry.prepare("INSERT INTO reg_database (FirstName,LastName,PhoneNumber,Password,RegType) VALUES(:firstname, :lastname, :phonenumber, :password, :radiobuttonvalue)");
    registerqry.bindValue(":firstname", firstname);
    registerqry.bindValue(":lastname", lastname);
    registerqry.bindValue(":phonenumber", phonenumber);
    registerqry.bindValue(":password", password);
    registerqry.bindValue(":radiobuttonvalue", registrationtype);

    if (registerqry.exec()){
        QMessageBox::information(this,"Register","Successfully Registered!");
        conn.connectionClose();
        this->hide();
    }
    else{
         QMessageBox::critical(this,tr("Error"),registerqry.lastError().text());
    }

}

