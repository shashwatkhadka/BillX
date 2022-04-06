#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>
#include "member_registration.h"
#include "employee_registration.h"

namespace Ui {
class registerDialog;
}

class registerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit registerDialog(QWidget *parent = nullptr);
    ~registerDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_member_clicked();

    void on_pushButton_employee_clicked();

private:
    Ui::registerDialog *ui;
    member_registration *mr;
    employee_registration *er;
};

#endif // REGISTERDIALOG_H
