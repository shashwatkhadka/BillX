#ifndef MEMBER_REGISTRATION_H
#define MEMBER_REGISTRATION_H

#include <QDialog>

namespace Ui {
class member_registration;
}

class member_registration : public QDialog
{
    Q_OBJECT

public:
    explicit member_registration(QWidget *parent = nullptr);
    ~member_registration();

private slots:
    void on_pushButton_register_clicked();

private:
    Ui::member_registration *ui;
};

#endif // MEMBER_REGISTRATION_H
