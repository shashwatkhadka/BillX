#include "createbill.h"
#include "ui_createbill.h"
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>
#include "mainwindow.h"

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

void CreateBill::on_pushButton_save_clicked()
{
    QString billno, mobileno, add, productid,item, rate, quantity, price, quan, q;
    float pr, qu;
    MainWindow conn;

    conn.connectionStart();

    billno=ui->lineEdit_billno->text();
    add=ui->lineEdit_add->text();
    mobileno=ui->lineEdit_mobileno->text();
    productid=ui->lineEdit_productcode->text();

    quantity=ui->lineEdit_quantity->text();


    QSqlQuery *logqry=new QSqlQuery(conn.mydb);

    QSqlQuery irqry, inqry;

    irqry.exec("SELECT item, Price, Quantity FROM inventory WHERE productid='"+productid+"'");

    while(irqry.next()){
        item = irqry.value(0).toString();
        rate = irqry.value(1).toString();
        quan = irqry.value(2).toString();
        qDebug() << item << rate;
    }

    qu = quan.toInt()-quantity.toInt();
    q=QString::number(qu);

    inqry.prepare("UPDATE inventory SET Quantity = '"+q+"' WHERE productid='"+productid+"'");

    pr=rate.toFloat()*quantity.toFloat();
    price=QString::number(pr);

    logqry->prepare("INSERT INTO billlog(billnumber, address, mobilenumber, productcode, item, rate, quantity, price) "
                    "values('"+billno+"', '"+add+"','"+mobileno+"','"+productid+"','"+item+"','"+rate+"','"+quantity+"','"+price+"')");
    if(logqry->exec()){
        if(inqry.exec()) qDebug()<<"query runs"; else qDebug()<<"query doesn't run";
        QMessageBox::information(this, tr("Save"), tr("Data Saved"));
    }
    else{
        qDebug()<<"Bill not saved";
        QMessageBox::critical(this, tr("Save"), tr("Not Saved, Check your Values"));
    }

    conn.connectionClose();
}


void CreateBill::on_pushButton_print_clicked()
{
    QString billno, price;

    billno=ui->lineEdit_billno->text();

    MainWindow conn;
    QSqlQueryModel *modal=new QSqlQueryModel();

    conn.connectionStart();
    QSqlQuery *billqry=new QSqlQuery(conn.mydb);

    billqry->prepare("SELECT * FROM billlog WHERE billnumber='"+billno+"'");
    billqry->exec();

    while (billqry->next()){
        price = billqry->value(7).toString();
    }

    modal->setQuery(std::move(*billqry));

    ui->tableView->setModel(modal);

    total=total+price.toFloat();

    ui->label_value->setText(QString::number(total));

    conn.connectionClose();
}


void CreateBill::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();

    MainWindow conn;

    conn.connectionStart();

    QSqlQuery bviewqry;

    bviewqry.prepare("SELECT * FROM billlog where mobilenumber = '"+val+"' or billnumber = '"+val+"'");
    if(bviewqry.exec()){
        while(bviewqry.next()){
            ui->lineEdit_mobileno->setText(bviewqry.value(2).toString());
            ui->lineEdit_add->setText(bviewqry.value(1).toString());
            ui->lineEdit_productcode->setText(bviewqry.value(3).toString());
            ui->lineEdit_quantity->setText(bviewqry.value(4).toString());
        }
    }

    conn.connectionClose();
}


void CreateBill::on_pushButton_4_clicked()
{

}


void CreateBill::on_pushButton_2_clicked()
{
    ui->lineEdit_billno->clear();
    ui->lineEdit_mobileno->clear();
    ui->lineEdit_add->clear();
    ui->lineEdit_productcode->clear();
    ui->lineEdit_quantity->clear();


}

