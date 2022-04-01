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

private slots:

    void showTime();

    void on_pushButton_clicked();


private:
    Ui::CreateBill *ui;
};

#endif // CREATEBILL_H
