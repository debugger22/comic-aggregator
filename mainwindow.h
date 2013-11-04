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
    void loadImage();

    
private:
    Ui::MainWindow *ui;
public:
    FileDownloader *m_pImgCtrl;
    //QDownloader downloader;
};

#endif // MAINWINDOW_H
