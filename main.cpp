#include "mainwindow.h"
#include <QApplication>

void setupUI(MainWindow *w){
    QDesktopWidget widget;
    QRect windowSize = widget.availableGeometry(widget.primaryScreen());
    int screenWidth = windowSize.width();
    int screenHeight = windowSize.height();
    windowSize.setWidth(screenWidth-200);
    windowSize.setHeight(screenHeight-100);
    w->setGeometry(windowSize);
    w->move((screenWidth - w->width())/2,(screenHeight - w->height())/2);
    QString title("Comic Aggregator");
    w->setWindowTitle(title);

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    setupUI(&w);
    w.show();
    
    return a.exec();
}
