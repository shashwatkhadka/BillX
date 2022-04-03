/********************************************************************************
** Form generated from reading UI file 'inventory.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORY_H
#define UI_INVENTORY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inventory
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *toppanel2;
    QHBoxLayout *toppanel;
    QSpacerItem *horizontalSpacer_4;
    QLabel *logo;
    QLabel *logoname;
    QSpacerItem *horizontalSpacer;
    QWidget *toppanel3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *search;
    QPushButton *searchbutton;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QFrame *frame_5;
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *Inventory)
    {
        if (Inventory->objectName().isEmpty())
            Inventory->setObjectName(QString::fromUtf8("Inventory"));
        Inventory->resize(963, 652);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Inventory->sizePolicy().hasHeightForWidth());
        Inventory->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Inventory);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toppanel2 = new QWidget(centralwidget);
        toppanel2->setObjectName(QString::fromUtf8("toppanel2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toppanel2->sizePolicy().hasHeightForWidth());
        toppanel2->setSizePolicy(sizePolicy1);
        toppanel2->setMinimumSize(QSize(0, 10));
        toppanel2->setStyleSheet(QString::fromUtf8(""));
        toppanel = new QHBoxLayout(toppanel2);
        toppanel->setObjectName(QString::fromUtf8("toppanel"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        toppanel->addItem(horizontalSpacer_4);

        logo = new QLabel(toppanel2);
        logo->setObjectName(QString::fromUtf8("logo"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy2);
        logo->setMinimumSize(QSize(70, 60));
        logo->setStyleSheet(QString::fromUtf8("border: 1px solid;\n"
"border-image: url(:/icons/billx1.png);"));

        toppanel->addWidget(logo);

        logoname = new QLabel(toppanel2);
        logoname->setObjectName(QString::fromUtf8("logoname"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(logoname->sizePolicy().hasHeightForWidth());
        logoname->setSizePolicy(sizePolicy3);
        logoname->setMinimumSize(QSize(70, 60));
        logoname->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/icons/logotext.png);"));

        toppanel->addWidget(logoname);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        toppanel->addItem(horizontalSpacer);


        verticalLayout->addWidget(toppanel2);

        toppanel3 = new QWidget(centralwidget);
        toppanel3->setObjectName(QString::fromUtf8("toppanel3"));
        toppanel3->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(toppanel3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 3, -1);
        label_2 = new QLabel(toppanel3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));

        horizontalLayout->addWidget(label_2);

        pushButton = new QPushButton(toppanel3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(40, 30));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"#pushButton{\n"
"border-radius:15px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        search = new QLineEdit(toppanel3);
        search->setObjectName(QString::fromUtf8("search"));
        sizePolicy2.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy2);
        search->setMinimumSize(QSize(0, 30));
        search->setStyleSheet(QString::fromUtf8("border:2px solid;\n"
"color:black;\n"
"border-radius:15px;"));

        horizontalLayout->addWidget(search);

        searchbutton = new QPushButton(toppanel3);
        searchbutton->setObjectName(QString::fromUtf8("searchbutton"));
        sizePolicy2.setHeightForWidth(searchbutton->sizePolicy().hasHeightForWidth());
        searchbutton->setSizePolicy(sizePolicy2);
        searchbutton->setMinimumSize(QSize(40, 30));
        searchbutton->setStyleSheet(QString::fromUtf8("border-radius:15px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchbutton->setIcon(icon1);
        searchbutton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(searchbutton);


        verticalLayout->addWidget(toppanel3);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy4);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy5);
        frame_2->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"color:white;\n"
"    \n"
"     \n"
"background-color:#D6BBDC;\n"
"\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(frame_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(50, 50));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:black;\n"
""));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 100, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(1, QFormLayout::SpanningRole, horizontalSpacer_3);

        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(0, 35));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2:hover{\n"
"color:#374ebb;\n"
"background-color:white;\n"
"}"));

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, pushButton_2);

        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(0, 35));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3:hover{\n"
"color:#374ebb;\n"
"background-color:white;\n"
"}"));

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, pushButton_3);

        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(0, 35));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("#pushButton_4:hover{\n"
"color:#374ebb;\n"
"background-color:white;\n"
"}"));

        formLayout_2->setWidget(6, QFormLayout::SpanningRole, pushButton_4);

        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(0, 35));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("#pushButton_5:hover{\n"
"color:#374ebb;\n"
"background-color:white;\n"
"}"));

        formLayout_2->setWidget(8, QFormLayout::SpanningRole, pushButton_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(3, QFormLayout::SpanningRole, horizontalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(5, QFormLayout::SpanningRole, horizontalSpacer_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(7, QFormLayout::SpanningRole, horizontalSpacer_7);


        horizontalLayout_4->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(4);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy6);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        sizePolicy4.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy4);
        frame_4->setStyleSheet(QString::fromUtf8("background-color:#4b5ebb;\n"
"border-radius:20px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color:black;"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_4);


        verticalLayout_2->addWidget(frame_4);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(20);
        sizePolicy7.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy7);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        tableWidget = new QTableWidget(frame_5);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 12)
            tableWidget->setRowCount(12);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem13);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 1221, 801));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy8);
        QFont font3;
        font3.setBold(true);
        tableWidget->setFont(font3);
        tableWidget->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));
        tableWidget->setRowCount(12);
        tableWidget->horizontalHeader()->setDefaultSectionSize(174);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(44);

        verticalLayout_2->addWidget(frame_5);


        horizontalLayout_4->addWidget(frame_3);


        verticalLayout->addWidget(frame);

        Inventory->setCentralWidget(centralwidget);

        retranslateUi(Inventory);

        QMetaObject::connectSlotsByName(Inventory);
    } // setupUi

    void retranslateUi(QMainWindow *Inventory)
    {
        Inventory->setWindowTitle(QCoreApplication::translate("Inventory", "MainWindow", nullptr));
        logo->setText(QString());
        logoname->setText(QString());
        label_2->setText(QCoreApplication::translate("Inventory", "Add Product", nullptr));
        pushButton->setText(QString());
        search->setText(QString());
        searchbutton->setText(QString());
        label_3->setText(QCoreApplication::translate("Inventory", "Dashboard", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Inventory", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Inventory", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Inventory", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Inventory", "PushButton", nullptr));
        label_4->setText(QCoreApplication::translate("Inventory", "INVENTORY", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Inventory", "Product", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Inventory", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Inventory", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Inventory", "Edit", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Inventory", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Inventory", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Inventory", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Inventory", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Inventory", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Inventory", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Inventory", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Inventory", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Inventory", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Inventory", "New Row", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inventory: public Ui_Inventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORY_H
