/********************************************************************************
** Form generated from reading UI file 'aboutbox.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTBOX_H
#define UI_ABOUTBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutBox
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblDesc;
    QHBoxLayout *horizontalLayout;
    QPushButton *cmdOk;

    void setupUi(QDialog *aboutBox)
    {
        if (aboutBox->objectName().isEmpty())
            aboutBox->setObjectName(QStringLiteral("aboutBox"));
        aboutBox->resize(630, 434);
        aboutBox->setMinimumSize(QSize(630, 434));
        aboutBox->setMaximumSize(QSize(630, 434));
        verticalLayoutWidget = new QWidget(aboutBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 611, 411));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblDesc = new QLabel(verticalLayoutWidget);
        lblDesc->setObjectName(QStringLiteral("lblDesc"));

        verticalLayout->addWidget(lblDesc);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cmdOk = new QPushButton(verticalLayoutWidget);
        cmdOk->setObjectName(QStringLiteral("cmdOk"));
        cmdOk->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(cmdOk);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(aboutBox);

        QMetaObject::connectSlotsByName(aboutBox);
    } // setupUi

    void retranslateUi(QDialog *aboutBox)
    {
        aboutBox->setWindowTitle(QApplication::translate("aboutBox", "Dialog", 0));
        lblDesc->setText(QApplication::translate("aboutBox", "The MIT License (MIT)\n"
"\n"
"Copyright (c) 2013 IEEE SB, BITS Goa\n"
"\n"
"Permission is hereby granted, free of charge, to any person obtaining a copy of\n"
"this software and associated documentation files (the \"Software\"), to deal in\n"
"the Software without restriction, including without limitation the rights to\n"
"use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of\n"
"the Software, and to permit persons to whom the Software is furnished to do so,\n"
"subject to the following conditions:\n"
"\n"
"The above copyright notice and this permission notice shall be included in all\n"
"copies or substantial portions of the Software.\n"
"\n"
"THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS\n"
"FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR\n"
"COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER\n"
"IN AN ACTION"
                        " OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN\n"
"CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.", 0));
        cmdOk->setText(QApplication::translate("aboutBox", "&Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class aboutBox: public Ui_aboutBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTBOX_H
