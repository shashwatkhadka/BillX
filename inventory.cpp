#include "inventory.h"
#include "mainwindow.h"
#include "ui_inventory.h"

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

    qry->prepare("select * from inventory where item='"+name+"'");

    qry -> exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connectionClose();
    qDebug() <<(modal->rowCount());

}
/*MainWindow conn;
QString eid;
eid=ui->searchbutton->text();

if(!conn.connectionStart()){

    qDebug()<<"failed to open database";
    return ;
}
conn.connectionStart();
QSqlQuery qry;
qry.prepare("select * from inventory where productid='"+eid+"'");
*/




