/********************************************************************************
** Form generated from reading UI file 'videowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOWINDOW_H
#define UI_VIDEOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VideoWindow)
    {
        if (VideoWindow->objectName().isEmpty())
            VideoWindow->setObjectName(QString::fromUtf8("VideoWindow"));
        VideoWindow->resize(240, 320);
        centralwidget = new QWidget(VideoWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        VideoWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VideoWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 240, 22));
        VideoWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(VideoWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        VideoWindow->setStatusBar(statusbar);

        retranslateUi(VideoWindow);

        QMetaObject::connectSlotsByName(VideoWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VideoWindow)
    {
        VideoWindow->setWindowTitle(QCoreApplication::translate("VideoWindow", "VideoWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoWindow: public Ui_VideoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOWINDOW_H
