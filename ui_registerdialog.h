/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registerDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_member;
    QPushButton *pushButton_employee;

    void setupUi(QDialog *registerDialog)
    {
        if (registerDialog->objectName().isEmpty())
            registerDialog->setObjectName(QString::fromUtf8("registerDialog"));
        registerDialog->resize(400, 300);
        gridLayout = new QGridLayout(registerDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_member = new QPushButton(registerDialog);
        pushButton_member->setObjectName(QString::fromUtf8("pushButton_member"));
        pushButton_member->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(pushButton_member);

        pushButton_employee = new QPushButton(registerDialog);
        pushButton_employee->setObjectName(QString::fromUtf8("pushButton_employee"));
        pushButton_employee->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(pushButton_employee);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(registerDialog);

        QMetaObject::connectSlotsByName(registerDialog);
    } // setupUi

    void retranslateUi(QDialog *registerDialog)
    {
        registerDialog->setWindowTitle(QCoreApplication::translate("registerDialog", "Dialog", nullptr));
        pushButton_member->setText(QCoreApplication::translate("registerDialog", "Member", nullptr));
        pushButton_employee->setText(QCoreApplication::translate("registerDialog", "Employee", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerDialog: public Ui_registerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
