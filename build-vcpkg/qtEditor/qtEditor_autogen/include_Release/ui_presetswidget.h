/********************************************************************************
** Form generated from reading UI file 'presetswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESETSWIDGET_H
#define UI_PRESETSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PresetsWidget
{
public:
    QVBoxLayout *mainLayout;
    QListWidget *presetsListWidget;

    void setupUi(QWidget *PresetsWidget)
    {
        if (PresetsWidget->objectName().isEmpty())
            PresetsWidget->setObjectName(QString::fromUtf8("PresetsWidget"));
        PresetsWidget->resize(300, 300);
        mainLayout = new QVBoxLayout(PresetsWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        presetsListWidget = new QListWidget(PresetsWidget);
        presetsListWidget->setObjectName(QString::fromUtf8("presetsListWidget"));

        mainLayout->addWidget(presetsListWidget);


        retranslateUi(PresetsWidget);

        QMetaObject::connectSlotsByName(PresetsWidget);
    } // setupUi

    void retranslateUi(QWidget *PresetsWidget)
    {
        PresetsWidget->setWindowTitle(QCoreApplication::translate("PresetsWidget", "PresetsWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PresetsWidget: public Ui_PresetsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESETSWIDGET_H
