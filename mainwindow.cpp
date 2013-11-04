#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filedownloader.h"
#include <fstream>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){

    QUrl imageUrl("http://dynamic.xkcd.com/random/comic/");
    FileDownloader *m_pImgCtrl = new FileDownloader(imageUrl, this);
    ui->setupUi(this);
    connect(ui->cmdFetch,SIGNAL(clicked()),this,SLOT(fetch()));
    connect(ui->actionExit, SIGNAL(triggered()),this,SLOT(close()));
    connect(m_pImgCtrl, SIGNAL(downloaded()), SLOT(loadImage()));


}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::fetch(){
    ui->cmdFetch->setText("Fetching...");
}

void MainWindow::loadImage(){
    //ui->lblView;
    ui->cmdFetch->setText("Fetch");

}
