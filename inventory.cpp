#include "inventory.h"
#include "mainwindow.h"
#include "ui_inventory.h"
#include "edit.h"


Inventory::Inventory(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inventory)
{
    ui->setupUi(this);
}

Inventory::~Inventory()
{
    delete ui;
}

void Inventory::on_pushButton_2_clicked()
{
    MainWindow conn;
    QSqlQueryModel * modal=new QSqlQueryModel();

    conn.connectionStart();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);

    qry->prepare("select * from inventory");

    qry -> exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    qry->clear();

    conn.connectionClose();
    qDebug() <<(modal->rowCount());
}


void Inventory::on_searchbutton_clicked()
{
    MainWindow conn;
    QString name;
    name=ui->search->text();
    QSqlQueryModel * modal=new QSqlQueryModel();

    conn.connectionStart();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);

    qry->prepare("select * from inventory where item='"+name+"' or productid='"+name+"'");

    qry -> exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    qry->clear();

    conn.connectionClose();
    qDebug() <<(modal->rowCount());

}



void Inventory::on_pushButton_3_clicked()
{
    /*Edit dialog;
       dialog.setModal(true);
       dialog.exec();*/
    e = new Edit();
    e->show();
}

