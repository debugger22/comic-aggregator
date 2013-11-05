#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QByteArray>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filedownloader.h"
#include <fstream>
#include <QUrl>
#include <QPixmap>
#include <iostream>
#include <QRegExp>
#include <stdlib.h>
#include <ctime>
#include "aboutbox.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void fetch();
    void getImageUrl();
    void loadImage();
    void showAboutBox();

private:
    Ui::MainWindow *ui;
    aboutBox *ab;

public:
    FileDownloader *m_pImgCtrl;
    FileDownloader *imageDownloader;
    //QDownloader downloader;
};

#endif // MAINWINDOW_H
