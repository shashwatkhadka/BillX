/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QPushButton *inventorybutton;
    QPushButton *registerbutton;
    QPushButton *createbillbutton;
    QPushButton *viewaccountbutton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(800, 600);
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(6, 155, 116, 255), stop:0.727273 rgba(0, 0, 0, 255));\n"
"}"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(225, 225));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/img/logo.png);"));

        verticalLayout_4->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, -1);
        inventorybutton = new QPushButton(centralwidget);
        inventorybutton->setObjectName(QString::fromUtf8("inventorybutton"));
        inventorybutton->setMinimumSize(QSize(200, 200));
        inventorybutton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.232955 rgba(0, 148, 116, 255), stop:0.568182 rgba(44, 204, 149, 255), stop:0.875 rgba(0, 168, 132, 251));\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(inventorybutton, 0, 2, 1, 1);

        registerbutton = new QPushButton(centralwidget);
        registerbutton->setObjectName(QString::fromUtf8("registerbutton"));
        registerbutton->setMinimumSize(QSize(200, 200));
        registerbutton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.232955 rgba(0, 148, 116, 255), stop:0.568182 rgba(44, 204, 149, 255), stop:0.875 rgba(0, 168, 132, 251));\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(registerbutton, 1, 2, 1, 1);

        createbillbutton = new QPushButton(centralwidget);
        createbillbutton->setObjectName(QString::fromUtf8("createbillbutton"));
        createbillbutton->setMinimumSize(QSize(200, 200));
        createbillbutton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.232955 rgba(0, 148, 116, 255), stop:0.568182 rgba(44, 204, 149, 255), stop:0.875 rgba(0, 168, 132, 251));\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(createbillbutton, 0, 0, 1, 1);

        viewaccountbutton = new QPushButton(centralwidget);
        viewaccountbutton->setObjectName(QString::fromUtf8("viewaccountbutton"));
        viewaccountbutton->setMinimumSize(QSize(200, 200));
        viewaccountbutton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.232955 rgba(0, 148, 116, 255), stop:0.568182 rgba(44, 204, 149, 255), stop:0.875 rgba(0, 168, 132, 251));\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(viewaccountbutton, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Dashboard->setCentralWidget(centralwidget);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "MainWindow", nullptr));
        label->setText(QString());
        inventorybutton->setText(QCoreApplication::translate("Dashboard", "INVENTORY", nullptr));
        registerbutton->setText(QCoreApplication::translate("Dashboard", "REGISTER ACCOUNT", nullptr));
        createbillbutton->setText(QCoreApplication::translate("Dashboard", "CREATE BILL", nullptr));
        viewaccountbutton->setText(QCoreApplication::translate("Dashboard", "VIEW ACCOUNTS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
