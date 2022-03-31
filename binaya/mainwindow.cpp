#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QDebug>
#include<QTimer>
#include<QDateTime>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/binay/OneDrive/Desktop/Project/BillX/binaya/logo/logo");
    ui->logo_billx->setPixmap(pix.scaled(50,50,Qt::KeepAspectRatio));

    QPixmap pixmap;
    pixmap.load(":/background.jpg");

    //scaling the image, optional. See the documentation for more options
    pixmap = pixmap.scaled(QSize(1920, 1080), Qt::KeepAspectRatio, Qt::SmoothTransformation);

    QPalette palette;
    palette.setBrush(QPalette::Window, pixmap);
    this->setPalette(palette);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();


}
void MainWindow:: showTime()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");
    if ((time.second()%2)==0)
    {
        time_text[3]= ' ';
        time_text[8]= ' ';
    }
    ui->DigitalClock->setText(time_text);

}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{


}


void MainWindow::on_pushButton_2_clicked()
{

}


void MainWindow::on_pushButton_3_clicked()
{

}


void MainWindow::on_pushButton_5_clicked()
{


}


void MainWindow::on_pushButton_4_clicked()
{




}


void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox ::warning(this,"Exit","Do you want to Exit ??",QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox :: Yes){
        QApplication::quit();
    } else {
        qDebug() << "No is clicked";

    }

}

