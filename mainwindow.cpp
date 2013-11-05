#include "mainwindow.h"
#include "aboutbox.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    connect(ui->cmdFetch,SIGNAL(clicked()),this,SLOT(fetch()));
    connect(ui->actionExit, SIGNAL(triggered()),this,SLOT(close()));
    connect(ui->actionAbout,SIGNAL(triggered()),this,SLOT(showAboutBox()));
    ui->statusBar->showMessage("Ready");
}


MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::fetch(){
    ui->cmdFetch->setText("Fetching...");
    ui->statusBar->showMessage("Downloading image urls...");
    QList<QString> list;
    list.append(QString("http://9gag.com/"));
    list.append(QString("http://www.lolhappens.com/"));
    list.append(QString("http://www.memecenter.com/"));
    list.append(QString("http://uberhumor.com/"));
    list.append(QString("http://porkystuff.com/"));
    m_pImgCtrl = new FileDownloader(QUrl(list[rand()%5]), this);
    connect(m_pImgCtrl, SIGNAL(downloaded()), SLOT(getImageUrl()));
    ui->cmdFetch->setEnabled(false);
}

void MainWindow::getImageUrl(){
    QString data = m_pImgCtrl->downloadedData();
    QRegExp rx("\\<img[^\\>]*src\\s*=\\s*\"([^\"]*)\"[^\\>]*\\>");

    QStringList list;
    int pos = 0;
    while ((pos = rx.indexIn(data, pos)) != -1){
        list << rx.cap(1);
        pos += rx.matchedLength();
    }
    int randomNo = rand() % list.length();
    ui->statusBar->showMessage("Fetching Image");
    QUrl imageUrl(list[randomNo]);
    imageDownloader = new FileDownloader(imageUrl,this);
    connect(imageDownloader,SIGNAL(downloaded()), SLOT(loadImage()));
}

void MainWindow::loadImage(){
    QImage image;
    image = QImage::fromData(imageDownloader->downloadedData());
    ui->cmdFetch->setText("Fetch");
    ui->lblView->setPixmap(QPixmap::fromImage(image));
    ui->cmdFetch->setEnabled(true);
    ui->statusBar->showMessage("Ready");
}

void MainWindow::showAboutBox(){
    ab = new aboutBox;
    ab->show();
    ui->statusBar->showMessage("casc");

}
