#-------------------------------------------------
#
# Project created by QtCreator 2013-11-04T17:34:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = comicaggregator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    filedownloader.cpp \
    DownloadFileHandler.cpp \
    aboutbox.cpp

HEADERS  += mainwindow.h \
    filedownloader.h \
    DownloadFileHandler.h \
    aboutbox.h

FORMS    += mainwindow.ui \
    aboutbox.ui

QT += network
