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

    void on_pushButton_save_clicked();

    void on_pushButton_print_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::CreateBill *ui;
};

#endif // CREATEBILL_H
