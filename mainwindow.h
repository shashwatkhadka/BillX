#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

#include "dashboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb;

    bool connectionStart(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("D:/Project/BillX/Database/data1.db");

        if (!mydb.open()){
            qDebug() << ("Database Fail");
            return false;
        }
        else{
            qDebug() << ("Database Connected");
            return true;
        }
    }

    void connectionClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_loginbutton_clicked();

private:
    Ui::MainWindow *ui;

    Dashboard *dboard;
};
#endif // MAINWINDOW_H
