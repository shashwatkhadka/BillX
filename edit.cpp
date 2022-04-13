#include "edit.h"
#include "ui_edit.h"
#include "mainwindow.h"
#include "inventory.h"

Edit::Edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint);
}

Edit::~Edit()
{
    delete ui;
}

void Edit::on_pushButton_clicked()
{

    MainWindow conn;
    conn.connectionStart();
        QString pid,quantit,addinven;
        int iquantit,addquantit;
        pid=ui->id->text();
        quantit=ui->quan->text();
        iquantit=quantit.toInt();

        QSqlQuery q;
        q.prepare("select quantity from inventory where productid='"+pid+"'");
        if (q.exec()){

            while(q.next()){
                addinven=q.value(0).toString();
            }
        }
        addquantit=addinven.toInt()+iquantit;
        qDebug()<<addquantit;


        q.clear();





        QSqlQuery* qry=new QSqlQuery(conn.mydb);

        qry->prepare("update inventory set Quantity=:a where productid='"+pid+"'");
        qry->bindValue(":a",addquantit);

        qry -> exec();

        qry->clear();

        conn.connectionClose();




}


void Edit::on_pushButton_2_clicked()
{
    this->hide();
}





void Edit::on_pushButton_4_clicked()
{
    MainWindow conn;
    conn.connectionStart();
        QString pid,quantit,subinven;
        int iquantit,subquantit;
        pid=ui->id->text();
        quantit=ui->quan->text();
        iquantit=quantit.toInt();

        QSqlQuery q;
        q.prepare("select quantity from inventory where productid='"+pid+"'");
        if (q.exec()){

            while(q.next()){
                subinven=q.value(0).toString();
            }
        }
        subquantit=subinven.toInt()-iquantit;
        qDebug()<<subquantit;


        q.clear();





        QSqlQuery* qry=new QSqlQuery(conn.mydb);

        qry->prepare("update inventory set Quantity=:a where productid='"+pid+"'");
        qry->bindValue(":a",subquantit);

        qry -> exec();


        qry->clear();
        conn.connectionClose();



}


void Edit::on_pushButton_3_clicked()
{
    MainWindow conn;
    conn.connectionStart();
        QString pid;

        pid=ui->id->text();

        QSqlQuery* qry=new QSqlQuery(conn.mydb);

        qry->prepare("delete from inventory where productid='"+pid+"'");

        qry -> exec();
        qDebug()<<pid;

        qry->clear();

        conn.connectionClose();

}

