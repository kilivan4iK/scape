/********************************************************************************
** Form generated from reading UI file 'buttondefinitionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONDEFINITIONSWIDGET_H
#define UI_BUTTONDEFINITIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ButtonDefinitionsWidget
{
public:
    QVBoxLayout *mainLayout;
    QGridLayout *definitionLayout;
    QLabel *definitionLabel;
    QComboBox *definitionComboBox;
    QLabel *priorityLabel;
    QSpinBox *prioritySpinBox;
    QGroupBox *buttonDefinitionDetailsGroupBox;
    QVBoxLayout *buttonDefinitionDetailsLayout;
    QListWidget *buttonDefinitionDetailsListWidget;
    QDialogButtonBox *mainButtonBox;

    void setupUi(QWidget *ButtonDefinitionsWidget)
    {
        if (ButtonDefinitionsWidget->objectName().isEmpty())
            ButtonDefinitionsWidget->setObjectName(QString::fromUtf8("ButtonDefinitionsWidget"));
        ButtonDefinitionsWidget->resize(300, 300);
        mainLayout = new QVBoxLayout(ButtonDefinitionsWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        definitionLayout = new QGridLayout();
        definitionLayout->setObjectName(QString::fromUtf8("definitionLayout"));
        definitionLabel = new QLabel(ButtonDefinitionsWidget);
        definitionLabel->setObjectName(QString::fromUtf8("definitionLabel"));

        definitionLayout->addWidget(definitionLabel, 0, 0, 1, 1);

        definitionComboBox = new QComboBox(ButtonDefinitionsWidget);
        definitionComboBox->setObjectName(QString::fromUtf8("definitionComboBox"));

        definitionLayout->addWidget(definitionComboBox, 0, 1, 1, 1);

        priorityLabel = new QLabel(ButtonDefinitionsWidget);
        priorityLabel->setObjectName(QString::fromUtf8("priorityLabel"));

        definitionLayout->addWidget(priorityLabel, 1, 0, 1, 1);

        prioritySpinBox = new QSpinBox(ButtonDefinitionsWidget);
        prioritySpinBox->setObjectName(QString::fromUtf8("prioritySpinBox"));

        definitionLayout->addWidget(prioritySpinBox, 1, 1, 1, 1);

        definitionLayout->setColumnStretch(0, 1);
        definitionLayout->setColumnStretch(1, 2);

        mainLayout->addLayout(definitionLayout);

        buttonDefinitionDetailsGroupBox = new QGroupBox(ButtonDefinitionsWidget);
        buttonDefinitionDetailsGroupBox->setObjectName(QString::fromUtf8("buttonDefinitionDetailsGroupBox"));
        buttonDefinitionDetailsLayout = new QVBoxLayout(buttonDefinitionDetailsGroupBox);
        buttonDefinitionDetailsLayout->setObjectName(QString::fromUtf8("buttonDefinitionDetailsLayout"));
        buttonDefinitionDetailsListWidget = new QListWidget(buttonDefinitionDetailsGroupBox);
        buttonDefinitionDetailsListWidget->setObjectName(QString::fromUtf8("buttonDefinitionDetailsListWidget"));

        buttonDefinitionDetailsLayout->addWidget(buttonDefinitionDetailsListWidget);


        mainLayout->addWidget(buttonDefinitionDetailsGroupBox);

        mainButtonBox = new QDialogButtonBox(ButtonDefinitionsWidget);
        mainButtonBox->setObjectName(QString::fromUtf8("mainButtonBox"));
        mainButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel);

        mainLayout->addWidget(mainButtonBox);


        retranslateUi(ButtonDefinitionsWidget);

        QMetaObject::connectSlotsByName(ButtonDefinitionsWidget);
    } // setupUi

    void retranslateUi(QWidget *ButtonDefinitionsWidget)
    {
        ButtonDefinitionsWidget->setWindowTitle(QCoreApplication::translate("ButtonDefinitionsWidget", "Button definitions", nullptr));
        definitionLabel->setText(QCoreApplication::translate("ButtonDefinitionsWidget", "Button definition", nullptr));
        priorityLabel->setText(QCoreApplication::translate("ButtonDefinitionsWidget", "Priority", nullptr));
        buttonDefinitionDetailsGroupBox->setTitle(QCoreApplication::translate("ButtonDefinitionsWidget", "Button definition details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ButtonDefinitionsWidget: public Ui_ButtonDefinitionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONDEFINITIONSWIDGET_H
