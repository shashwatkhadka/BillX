#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if (!connectionStart())
        ui -> loginstatus -> setText("Database Fail");
    else
        ui -> loginstatus -> setText("Database Connected");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginbutton_clicked()
{
    QString phonenumber, password;
    phonenumber = ui->lineEdit_phonenumber->text();
    password = ui->lineEdit_password->text();

    if(!connectionStart()){
        qDebug()<<"Failed to open database";
        return;
    }

    connectionStart();

    QSqlQuery loginqry;
    loginqry.prepare("SELECT * FROM reg_database WHERE RegType = 'E' and PhoneNumber ='"+phonenumber+"' and password ='"+password+"'");
    if (loginqry.exec()){
        int count = 0;
        while (loginqry.next()){
            count++;
        }
        if (count==1){
            ui->loginstatus->setText("Correct Username and Password");
            connectionClose();
            this -> hide();
            dboard = new Dashboard(this);
            dboard -> show();
        }
        if (count>1)
            ui->loginstatus->setText("Duplicate Username and Password");
        if (count<1)
            ui->loginstatus->setText("Incorrect Phone Number or Password");
    }
}

