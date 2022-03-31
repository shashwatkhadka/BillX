#include "viewaccounts.h"
#include "ui_viewaccounts.h"
#include "mainwindow.h"

ViewAccounts::ViewAccounts(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ViewAccounts)
{
    ui->setupUi(this);
    MainWindow conn;
    QSqlQueryModel *employee_model= new QSqlQueryModel();
    QSqlQueryModel *member_model= new QSqlQueryModel();

    conn.connectionStart();
    QSqlQuery *employee_qry=new QSqlQuery(conn.mydb);
    QSqlQuery *member_qry=new QSqlQuery(conn.mydb);

    employee_qry->prepare("SELECT FirstName,LastName,PhoneNumber FROM reg_database WHERE RegType='E'");
    member_qry->prepare("SELECT FirstName,LastName,PhoneNumber FROM reg_database WHERE RegType='M'");

    employee_qry->exec();
    employee_model->setQuery(*employee_qry);
    member_qry->exec();
    member_model->setQuery(*member_qry);

    ui->tableView_employee->setModel(employee_model);
    ui->tableView_member->setModel(member_model);
    conn.connectionClose();

}

ViewAccounts::~ViewAccounts()
{
    delete ui;
}
