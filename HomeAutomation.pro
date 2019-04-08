#-------------------------------------------------
#
# Project created by QtCreator 2017-03-13T15:02:07
#
#-------------------------------------------------

QT       += core gui

LIBS += \
       -lboost_system\

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HomeAutomation
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serial.cpp \
    clockthread.cpp

HEADERS  += mainwindow.h \
    serial.h \
    clockthread.h \
    main.h

FORMS    += mainwindow.ui

RESOURCES += \
    afbeeldingen.qrc
