#ifndef ABOUTBOX_H
#define ABOUTBOX_H

#include <QDialog>

namespace Ui {
class aboutBox;
}

class aboutBox : public QDialog
{
    Q_OBJECT
    
public:
    explicit aboutBox(QWidget *parent = 0);
    ~aboutBox();
    
private:
    Ui::aboutBox *ui;
};

#endif // ABOUTBOX_H
