#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("D:/Project/BillX/Database/data1.db");

    if (!mydb.open())
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

    if(!mydb.isOpen()){
        qDebug()<<"Failed to open database";
        return;
    }

    QSqlQuery loginqry;
    if (loginqry.exec("select * from employees where employeeid ='"+username+"' and password ='"+password+"'")){
        int count = 0;
        while (loginqry.next()){
            count++;
        }
        if (count==1){
            ui->loginstatus->setText("Username and Password is correct");
            dboard= new Dashboard(this);
            dboard->show();}
        if (count>1)
            ui->loginstatus->setText("Duplicate Username and Password");
        if (count<1)
            ui->loginstatus->setText("Incorrect Username or Password");
    }

    /*dboard= new Dashboard(this);
    dboard->show();*/
}

