#ifndef VIEWACCOUNTS_H
#define VIEWACCOUNTS_H

#include <QMainWindow>

namespace Ui {
class ViewAccounts;
}

class ViewAccounts : public QMainWindow
{
    Q_OBJECT

public:
    explicit ViewAccounts(QWidget *parent = nullptr);
    ~ViewAccounts();

private:
    Ui::ViewAccounts *ui;
};

#endif // VIEWACCOUNTS_H
