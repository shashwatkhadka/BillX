/********************************************************************************
** Form generated from reading UI file 'registeraccount.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERACCOUNT_H
#define UI_REGISTERACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterAccount
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_firstname;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_lastname;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_phonenumber;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_register;
    QLabel *label_registeraccount_connectionstatus;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_member;
    QRadioButton *radioButton_employee;

    void setupUi(QMainWindow *RegisterAccount)
    {
        if (RegisterAccount->objectName().isEmpty())
            RegisterAccount->setObjectName(QString::fromUtf8("RegisterAccount"));
        RegisterAccount->resize(800, 600);
        centralwidget = new QWidget(RegisterAccount);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 161, 31));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(240, 130, 311, 301));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 261, 249));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_firstname = new QLineEdit(layoutWidget);
        lineEdit_firstname->setObjectName(QString::fromUtf8("lineEdit_firstname"));

        horizontalLayout->addWidget(lineEdit_firstname);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_lastname = new QLineEdit(layoutWidget);
        lineEdit_lastname->setObjectName(QString::fromUtf8("lineEdit_lastname"));

        horizontalLayout_2->addWidget(lineEdit_lastname);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_phonenumber = new QLineEdit(layoutWidget);
        lineEdit_phonenumber->setObjectName(QString::fromUtf8("lineEdit_phonenumber"));

        horizontalLayout_3->addWidget(lineEdit_phonenumber);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_register = new QPushButton(layoutWidget);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));

        verticalLayout->addWidget(pushButton_register);

        label_registeraccount_connectionstatus = new QLabel(centralwidget);
        label_registeraccount_connectionstatus->setObjectName(QString::fromUtf8("label_registeraccount_connectionstatus"));
        label_registeraccount_connectionstatus->setGeometry(QRect(30, 500, 151, 41));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 130, 181, 131));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 40, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_member = new QRadioButton(verticalLayoutWidget);
        radioButton_member->setObjectName(QString::fromUtf8("radioButton_member"));

        verticalLayout_2->addWidget(radioButton_member);

        radioButton_employee = new QRadioButton(verticalLayoutWidget);
        radioButton_employee->setObjectName(QString::fromUtf8("radioButton_employee"));

        verticalLayout_2->addWidget(radioButton_employee);

        RegisterAccount->setCentralWidget(centralwidget);

        retranslateUi(RegisterAccount);

        QMetaObject::connectSlotsByName(RegisterAccount);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterAccount)
    {
        RegisterAccount->setWindowTitle(QCoreApplication::translate("RegisterAccount", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("RegisterAccount", "REGISTER ACCOUNT", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegisterAccount", "Register", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterAccount", "First Name:       ", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterAccount", "Last Name:       ", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterAccount", "Phone Number:", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterAccount", "Password:         ", nullptr));
        pushButton_register->setText(QCoreApplication::translate("RegisterAccount", "Register", nullptr));
        label_registeraccount_connectionstatus->setText(QCoreApplication::translate("RegisterAccount", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RegisterAccount", "Registration Type", nullptr));
        radioButton_member->setText(QCoreApplication::translate("RegisterAccount", "Member", nullptr));
        radioButton_employee->setText(QCoreApplication::translate("RegisterAccount", "Employee", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterAccount: public Ui_RegisterAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERACCOUNT_H
