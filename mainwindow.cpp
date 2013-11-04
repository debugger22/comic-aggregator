#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){

    //QUrl imageUrl("http://dynamic.xkcd.com/random/comic/");

    ui->setupUi(this);
    connect(ui->cmdFetch,SIGNAL(clicked()),this,SLOT(fetch()));
    connect(ui->actionExit, SIGNAL(triggered()),this,SLOT(close()));
}


MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::fetch(){
    ui->cmdFetch->setText("Fetching...");
    QUrl imageUrl("");
    m_pImgCtrl = new FileDownloader(imageUrl, this);
    connect(m_pImgCtrl, SIGNAL(downloaded()), SLOT(loadImage()));
    ui->cmdFetch->setEnabled(false);
}

void MainWindow::loadImage(){
    QImage image;
    image = QImage::fromData(m_pImgCtrl->downloadedData());//the second param is format name
    ui->cmdFetch->setText("Fetch");
    ui->lblView->setPixmap(QPixmap::fromImage(image));
    ui->cmdFetch->setEnabled(true);
}
