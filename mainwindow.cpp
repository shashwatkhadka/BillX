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
    QString username, password;
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    if(!connectionStart()){
        qDebug()<<"Failed to open database";
        return;
    }

    connectionStart();

    QSqlQuery loginqry;
    loginqry.prepare("select * from employees where who = '1' and id ='"+username+"' and password ='"+password+"'");
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
            ui->loginstatus->setText("Incorrect Username or Password");
    }
}

