#ifndef EMPLOYEE_REGISTRATION_H
#define EMPLOYEE_REGISTRATION_H

#include <QDialog>

namespace Ui {
class employee_registration;
}

class employee_registration : public QDialog
{
    Q_OBJECT

public:
    explicit employee_registration(QWidget *parent = nullptr);
    ~employee_registration();

private slots:
    void on_pushButton_register_clicked();

private:
    Ui::employee_registration *ui;
};

#endif // EMPLOYEE_REGISTRATION_H
