/********************************************************************************
** Form generated from reading UI file 'viewaccounts.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWACCOUNTS_H
#define UI_VIEWACCOUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewAccounts
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableView_employee;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *tableView_member;

    void setupUi(QMainWindow *ViewAccounts)
    {
        if (ViewAccounts->objectName().isEmpty())
            ViewAccounts->setObjectName(QString::fromUtf8("ViewAccounts"));
        ViewAccounts->resize(800, 600);
        centralwidget = new QWidget(ViewAccounts);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(60, 100, 681, 381));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 10, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 10, 5, -1);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        tableView_employee = new QTableView(horizontalLayoutWidget_2);
        tableView_employee->setObjectName(QString::fromUtf8("tableView_employee"));

        verticalLayout->addWidget(tableView_employee);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 10, 5, -1);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        tableView_member = new QTableView(horizontalLayoutWidget_2);
        tableView_member->setObjectName(QString::fromUtf8("tableView_member"));

        verticalLayout_2->addWidget(tableView_member);


        horizontalLayout_2->addLayout(verticalLayout_2);

        ViewAccounts->setCentralWidget(centralwidget);

        retranslateUi(ViewAccounts);

        QMetaObject::connectSlotsByName(ViewAccounts);
    } // setupUi

    void retranslateUi(QMainWindow *ViewAccounts)
    {
        ViewAccounts->setWindowTitle(QCoreApplication::translate("ViewAccounts", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ViewAccounts", "Employee", nullptr));
        label_2->setText(QCoreApplication::translate("ViewAccounts", "Member", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewAccounts: public Ui_ViewAccounts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWACCOUNTS_H
