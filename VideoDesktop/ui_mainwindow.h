/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Play;
    QTextEdit *PathEdit;
    QLabel *label;
    QPushButton *FileOpen;
    QCheckBox *checkBox;
    QSlider *Volume;
    QLabel *label_2;
    QLabel *fileName;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(223, 276);
        MainWindow->setMinimumSize(QSize(223, 276));
        MainWindow->setMaximumSize(QSize(223, 276));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Play = new QPushButton(centralWidget);
        Play->setObjectName(QString::fromUtf8("Play"));
        Play->setGeometry(QRect(0, 189, 91, 21));
        PathEdit = new QTextEdit(centralWidget);
        PathEdit->setObjectName(QString::fromUtf8("PathEdit"));
        PathEdit->setGeometry(QRect(0, 165, 181, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Academy Engraved LET"));
        font.setPointSize(8);
        PathEdit->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 132, 61, 20));
        FileOpen = new QPushButton(centralWidget);
        FileOpen->setObjectName(QString::fromUtf8("FileOpen"));
        FileOpen->setGeometry(QRect(60, 140, 51, 20));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(150, 70, 73, 18));
        Volume = new QSlider(centralWidget);
        Volume->setObjectName(QString::fromUtf8("Volume"));
        Volume->setGeometry(QRect(0, 30, 131, 20));
        Volume->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 54, 12));
        fileName = new QLabel(centralWidget);
        fileName->setObjectName(QString::fromUtf8("fileName"));
        fileName->setGeometry(QRect(0, 105, 221, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 223, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\212\250\346\200\201\345\243\201\347\272\270", nullptr));
        Play->setText(QCoreApplication::translate("MainWindow", "\345\272\224\347\224\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\252\222\344\275\223\345\234\260\345\235\200", nullptr));
        FileOpen->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\276\252\347\216\257\346\222\255\346\224\276", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\351\237\263\351\207\217", nullptr));
        fileName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
