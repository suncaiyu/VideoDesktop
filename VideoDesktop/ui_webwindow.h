/********************************************************************************
** Form generated from reading UI file 'webwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBWINDOW_H
#define UI_WEBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WebWindow)
    {
        if (WebWindow->objectName().isEmpty())
            WebWindow->setObjectName(QString::fromUtf8("WebWindow"));
        WebWindow->resize(240, 320);
        menubar = new QMenuBar(WebWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        WebWindow->setMenuBar(menubar);
        centralwidget = new QWidget(WebWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        WebWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(WebWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WebWindow->setStatusBar(statusbar);

        retranslateUi(WebWindow);

        QMetaObject::connectSlotsByName(WebWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WebWindow)
    {
        WebWindow->setWindowTitle(QCoreApplication::translate("WebWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WebWindow: public Ui_WebWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBWINDOW_H
