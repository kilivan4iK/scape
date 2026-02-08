/********************************************************************************
** Form generated from reading UI file 'buttondefinitiondetailswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONDEFINITIONDETAILSWIDGET_H
#define UI_BUTTONDEFINITIONDETAILSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ButtonDefinitionDetailsWidget
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *contentLayout;
    QGroupBox *inactiveGroupBox;
    QVBoxLayout *inactiveGroupBoxLayout;
    QListWidget *inactiveListWidget;
    QVBoxLayout *middleButtonsLayout;
    QPushButton *moveToLeftButton;
    QPushButton *moveToRightButton;
    QGroupBox *activeGroupBox;
    QVBoxLayout *activeGroupBoxLayout;
    QListWidget *activeListWidget;
    QDialogButtonBox *mainButtonBox;

    void setupUi(QWidget *ButtonDefinitionDetailsWidget)
    {
        if (ButtonDefinitionDetailsWidget->objectName().isEmpty())
            ButtonDefinitionDetailsWidget->setObjectName(QString::fromUtf8("ButtonDefinitionDetailsWidget"));
        ButtonDefinitionDetailsWidget->resize(440, 320);
        mainLayout = new QVBoxLayout(ButtonDefinitionDetailsWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        contentLayout = new QHBoxLayout();
        contentLayout->setObjectName(QString::fromUtf8("contentLayout"));
        inactiveGroupBox = new QGroupBox(ButtonDefinitionDetailsWidget);
        inactiveGroupBox->setObjectName(QString::fromUtf8("inactiveGroupBox"));
        inactiveGroupBoxLayout = new QVBoxLayout(inactiveGroupBox);
        inactiveGroupBoxLayout->setObjectName(QString::fromUtf8("inactiveGroupBoxLayout"));
        inactiveListWidget = new QListWidget(inactiveGroupBox);
        inactiveListWidget->setObjectName(QString::fromUtf8("inactiveListWidget"));

        inactiveGroupBoxLayout->addWidget(inactiveListWidget);


        contentLayout->addWidget(inactiveGroupBox);

        middleButtonsLayout = new QVBoxLayout();
        middleButtonsLayout->setObjectName(QString::fromUtf8("middleButtonsLayout"));
        moveToLeftButton = new QPushButton(ButtonDefinitionDetailsWidget);
        moveToLeftButton->setObjectName(QString::fromUtf8("moveToLeftButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(moveToLeftButton->sizePolicy().hasHeightForWidth());
        moveToLeftButton->setSizePolicy(sizePolicy);

        middleButtonsLayout->addWidget(moveToLeftButton);

        moveToRightButton = new QPushButton(ButtonDefinitionDetailsWidget);
        moveToRightButton->setObjectName(QString::fromUtf8("moveToRightButton"));

        middleButtonsLayout->addWidget(moveToRightButton);


        contentLayout->addLayout(middleButtonsLayout);

        activeGroupBox = new QGroupBox(ButtonDefinitionDetailsWidget);
        activeGroupBox->setObjectName(QString::fromUtf8("activeGroupBox"));
        activeGroupBoxLayout = new QVBoxLayout(activeGroupBox);
        activeGroupBoxLayout->setObjectName(QString::fromUtf8("activeGroupBoxLayout"));
        activeListWidget = new QListWidget(activeGroupBox);
        activeListWidget->setObjectName(QString::fromUtf8("activeListWidget"));

        activeGroupBoxLayout->addWidget(activeListWidget);


        contentLayout->addWidget(activeGroupBox);

        contentLayout->setStretch(0, 2);
        contentLayout->setStretch(1, 1);
        contentLayout->setStretch(2, 2);

        mainLayout->addLayout(contentLayout);

        mainButtonBox = new QDialogButtonBox(ButtonDefinitionDetailsWidget);
        mainButtonBox->setObjectName(QString::fromUtf8("mainButtonBox"));
        mainButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel);

        mainLayout->addWidget(mainButtonBox);


        retranslateUi(ButtonDefinitionDetailsWidget);

        QMetaObject::connectSlotsByName(ButtonDefinitionDetailsWidget);
    } // setupUi

    void retranslateUi(QWidget *ButtonDefinitionDetailsWidget)
    {
        ButtonDefinitionDetailsWidget->setWindowTitle(QCoreApplication::translate("ButtonDefinitionDetailsWidget", "Button definition details", nullptr));
        inactiveGroupBox->setTitle(QCoreApplication::translate("ButtonDefinitionDetailsWidget", "Inactive", nullptr));
        moveToLeftButton->setText(QCoreApplication::translate("ButtonDefinitionDetailsWidget", "\342\206\220", nullptr));
        moveToRightButton->setText(QCoreApplication::translate("ButtonDefinitionDetailsWidget", "\342\206\222", nullptr));
        activeGroupBox->setTitle(QCoreApplication::translate("ButtonDefinitionDetailsWidget", "Active", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ButtonDefinitionDetailsWidget: public Ui_ButtonDefinitionDetailsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONDEFINITIONDETAILSWIDGET_H
