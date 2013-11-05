#include "aboutbox.h"
#include "ui_aboutbox.h"

aboutBox::aboutBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutBox)
{
    ui->setupUi(this);
    connect(ui->cmdOk,SIGNAL(clicked()),this,SLOT(close()));
    this->setWindowTitle("About");
}

aboutBox::~aboutBox()
{
    delete ui;
}
