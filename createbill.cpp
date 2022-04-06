#include "createbill.h"
#include "ui_createbill.h"
#include <QMessageBox>
#include<QTimer>
#include<QDateTime>
#include"mainwindow.h"

CreateBill::CreateBill(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateBill)
{
    ui->setupUi(this);
    QPixmap pix("D:/Project/BillX/logo/logo");
    ui->logo->setPixmap(pix.scaled(50,50,Qt::KeepAspectRatio));

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();

    QDate date=QDate::currentDate();
    QString datetext=date.toString();
    ui->DateTime->setText(datetext);
}
void CreateBill:: showTime()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");
    if ((time.second()%2)==0)
    {
        time_text[3]= ' ';
        time_text[8]= ' ';
    }
    ui->Digital_clock->setText(time_text);

}

CreateBill::~CreateBill()
{
    delete ui;
}


void CreateBill::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox ::warning(this,"Exit","Do you want to Exit ??",QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox :: Yes){
        QApplication::quit();
    }
}


void CreateBill::on_pushButton_2_clicked()
{


}


void CreateBill::on_pushButton_5_clicked()
{
    QString productcode,quantity,val;

    productcode=ui->lineEdit_productcode->text();
    quantity=ui->lineEdit_quantity->text();

    MainWindow conn;
    QSqlQueryModel *modal=new QSqlQueryModel();

    conn.connectionStart();
    QSqlQuery *qry=new QSqlQuery(conn.mydb);

    qry->prepare("SELECT ProductCode , Item , Price FROM inventory WHERE ProductCode='"+productcode+"'");
    qry->exec();

    modal->setQuery(*qry);

    ui->tableView->setModel(modal);

    //getting data from a particular place in the qtableview:
    val= ui->tableView->model()->data(ui->tableView->model()->index(0,2)).toString();//index(row,column)

    ival=val.toInt();
    iquantity=quantity.toInt();
    total=total+ival*iquantity;

     ui->label_value->setText(QString::number(total));
    conn.connectionClose();
}

