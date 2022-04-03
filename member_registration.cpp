#include "member_registration.h"
#include "ui_member_registration.h"
#include "mainwindow.h"
#include <QMessageBox>

member_registration::member_registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::member_registration)
{
    ui->setupUi(this);
}

member_registration::~member_registration()
{
    delete ui;
}

void member_registration::on_pushButton_register_clicked()
{
    QString firstname,lastname,phonenumber,registrationtype;
    firstname = ui->lineEdit_firstname->text();
    lastname = ui->lineEdit_lastname->text();
    phonenumber = ui->lineEdit_phonenumber->text();

    registrationtype='M';

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
    registerqry.bindValue(":password", NULL);
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

