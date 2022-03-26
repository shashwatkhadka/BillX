QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    createbill.cpp \
    dashboard.cpp \
    inventory.cpp \
    main.cpp \
    mainwindow.cpp \
    registeraccount.cpp \
    viewaccounts.cpp

HEADERS += \
    createbill.h \
    dashboard.h \
    inventory.h \
    mainwindow.h \
    registeraccount.h \
    viewaccounts.h

FORMS += \
    createbill.ui \
    dashboard.ui \
    inventory.ui \
    mainwindow.ui \
    registeraccount.ui \
    viewaccounts.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
