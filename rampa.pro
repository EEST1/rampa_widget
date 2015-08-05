#-------------------------------------------------
#
# Project created by QtCreator 2015-06-27T13:59:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rampa
TEMPLATE = app


SOURCES += main.cpp\
        rampa.cpp \
    rs232.c

HEADERS  += rampa.h \
    rs232.h

FORMS    += rampa.ui
