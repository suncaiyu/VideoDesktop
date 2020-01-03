/********************************************************************************
** Form generated from reading UI file 'AdsWidget2.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADSWIDGET2_H
#define UI_ADSWIDGET2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdsWidget2
{
public:

    void setupUi(QWidget *AdsWidget2)
    {
        if (AdsWidget2->objectName().isEmpty())
            AdsWidget2->setObjectName(QString::fromUtf8("AdsWidget2"));
        AdsWidget2->resize(400, 300);

        retranslateUi(AdsWidget2);

        QMetaObject::connectSlotsByName(AdsWidget2);
    } // setupUi

    void retranslateUi(QWidget *AdsWidget2)
    {
        AdsWidget2->setWindowTitle(QCoreApplication::translate("AdsWidget2", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdsWidget2: public Ui_AdsWidget2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADSWIDGET2_H
