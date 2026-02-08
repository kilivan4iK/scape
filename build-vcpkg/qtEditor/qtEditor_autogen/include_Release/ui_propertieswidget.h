/********************************************************************************
** Form generated from reading UI file 'propertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESWIDGET_H
#define UI_PROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertiesWidget
{
public:
    QVBoxLayout *mainLayout;
    QTreeView *propertiesTreeView;

    void setupUi(QWidget *PropertiesWidget)
    {
        if (PropertiesWidget->objectName().isEmpty())
            PropertiesWidget->setObjectName(QString::fromUtf8("PropertiesWidget"));
        PropertiesWidget->resize(300, 300);
        mainLayout = new QVBoxLayout(PropertiesWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        propertiesTreeView = new QTreeView(PropertiesWidget);
        propertiesTreeView->setObjectName(QString::fromUtf8("propertiesTreeView"));

        mainLayout->addWidget(propertiesTreeView);


        retranslateUi(PropertiesWidget);

        QMetaObject::connectSlotsByName(PropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *PropertiesWidget)
    {
        PropertiesWidget->setWindowTitle(QCoreApplication::translate("PropertiesWidget", "PropertiesWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertiesWidget: public Ui_PropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESWIDGET_H
