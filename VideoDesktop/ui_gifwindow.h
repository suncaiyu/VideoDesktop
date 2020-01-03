/********************************************************************************
** Form generated from reading UI file 'gifwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIFWINDOW_H
#define UI_GIFWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GifWindow
{
public:
    QWidget *centralwidget;
    QLabel *gifLable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GifWindow)
    {
        if (GifWindow->objectName().isEmpty())
            GifWindow->setObjectName(QString::fromUtf8("GifWindow"));
        GifWindow->resize(240, 320);
        centralwidget = new QWidget(GifWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gifLable = new QLabel(centralwidget);
        gifLable->setObjectName(QString::fromUtf8("gifLable"));
        gifLable->setGeometry(QRect(0, 0, 121, 131));
        GifWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GifWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 240, 22));
        GifWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GifWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GifWindow->setStatusBar(statusbar);

        retranslateUi(GifWindow);

        QMetaObject::connectSlotsByName(GifWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GifWindow)
    {
        GifWindow->setWindowTitle(QCoreApplication::translate("GifWindow", "MainWindow", nullptr));
        gifLable->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GifWindow: public Ui_GifWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIFWINDOW_H
