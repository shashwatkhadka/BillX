#include "createbill.h"
#include "ui_createbill.h"
#include <QMessageBox>
#include<QTimer>
#include<QDateTime>

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

