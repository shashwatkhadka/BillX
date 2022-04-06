#ifndef CREATEBILL_H
#define CREATEBILL_H

#include <QMainWindow>


namespace Ui {
class CreateBill;
}

class CreateBill : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateBill(QWidget *parent = nullptr);
    ~CreateBill();

    int ival=0;
    int total=0;
    int iquantity=0;



private slots:

    void showTime();

    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::CreateBill *ui;
};

#endif // CREATEBILL_H
