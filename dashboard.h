#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include "createbill.h"//class name is CreateBill
#include "inventory.h"// class name is Inventory
#include "registerdialog.h"//class name is RegisterAccount
#include "viewaccounts.h"//class name is ViewAccounts

namespace Ui {
class Dashboard;
}

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_createbillbutton_clicked();

    void on_inventorybutton_clicked();

    void on_viewaccountbutton_clicked();

    void on_registerbutton_clicked();

private:
    Ui::Dashboard *ui;
    CreateBill *cb;
    Inventory *iv;
    registerDialog *ra;
    ViewAccounts *va;
};

#endif // DASHBOARD_H
