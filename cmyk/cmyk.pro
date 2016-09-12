#-------------------------------------------------
#
# Project created by QtCreator 2016-09-03T17:44:57
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cmyk
TEMPLATE = app

CONFIG += C++11


SOURCES +=  main.cpp\
            mainwindow.cpp \
            toolsframe.cpp \
            mainframe.cpp \
            orderdialog.cpp \
            consumables.cpp \
            paper.cpp \
            lamination.cpp \
            order.cpp \
            database.cpp

HEADERS  += mainwindow.h \
            toolsframe.h \
            mainframe.h \
            orderdialog.h \
            consumables.h \
            lamination.h \
            paper.h \
            order.h \
            database.h
