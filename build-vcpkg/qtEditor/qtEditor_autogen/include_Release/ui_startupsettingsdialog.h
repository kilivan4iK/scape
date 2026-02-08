/********************************************************************************
** Form generated from reading UI file 'startupsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUPSETTINGSDIALOG_H
#define UI_STARTUPSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StartupSettingsDialog
{
public:
    QVBoxLayout *dialogLayout;
    QGridLayout *mainLayout;
    QLabel *heightfieldRowsLabel;
    QSpinBox *heightfieldRowsSpinBox;
    QLabel *heightfieldColumnsLabel;
    QSpinBox *heightfieldColumnsSpinBox;
    QLabel *heightfieldHeightLabel;
    QDoubleSpinBox *heightfieldHeightDoubleSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StartupSettingsDialog)
    {
        if (StartupSettingsDialog->objectName().isEmpty())
            StartupSettingsDialog->setObjectName(QString::fromUtf8("StartupSettingsDialog"));
        StartupSettingsDialog->resize(350, 200);
        dialogLayout = new QVBoxLayout(StartupSettingsDialog);
        dialogLayout->setObjectName(QString::fromUtf8("dialogLayout"));
        mainLayout = new QGridLayout();
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        heightfieldRowsLabel = new QLabel(StartupSettingsDialog);
        heightfieldRowsLabel->setObjectName(QString::fromUtf8("heightfieldRowsLabel"));

        mainLayout->addWidget(heightfieldRowsLabel, 0, 0, 1, 1);

        heightfieldRowsSpinBox = new QSpinBox(StartupSettingsDialog);
        heightfieldRowsSpinBox->setObjectName(QString::fromUtf8("heightfieldRowsSpinBox"));

        mainLayout->addWidget(heightfieldRowsSpinBox, 0, 1, 1, 1);

        heightfieldColumnsLabel = new QLabel(StartupSettingsDialog);
        heightfieldColumnsLabel->setObjectName(QString::fromUtf8("heightfieldColumnsLabel"));

        mainLayout->addWidget(heightfieldColumnsLabel, 1, 0, 1, 1);

        heightfieldColumnsSpinBox = new QSpinBox(StartupSettingsDialog);
        heightfieldColumnsSpinBox->setObjectName(QString::fromUtf8("heightfieldColumnsSpinBox"));

        mainLayout->addWidget(heightfieldColumnsSpinBox, 1, 1, 1, 1);

        heightfieldHeightLabel = new QLabel(StartupSettingsDialog);
        heightfieldHeightLabel->setObjectName(QString::fromUtf8("heightfieldHeightLabel"));

        mainLayout->addWidget(heightfieldHeightLabel, 2, 0, 1, 1);

        heightfieldHeightDoubleSpinBox = new QDoubleSpinBox(StartupSettingsDialog);
        heightfieldHeightDoubleSpinBox->setObjectName(QString::fromUtf8("heightfieldHeightDoubleSpinBox"));

        mainLayout->addWidget(heightfieldHeightDoubleSpinBox, 2, 1, 1, 1);


        dialogLayout->addLayout(mainLayout);

        buttonBox = new QDialogButtonBox(StartupSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::RestoreDefaults);

        dialogLayout->addWidget(buttonBox);


        retranslateUi(StartupSettingsDialog);

        QMetaObject::connectSlotsByName(StartupSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *StartupSettingsDialog)
    {
        StartupSettingsDialog->setWindowTitle(QCoreApplication::translate("StartupSettingsDialog", "Startup settings", nullptr));
        heightfieldRowsLabel->setText(QCoreApplication::translate("StartupSettingsDialog", "Heightfield Rows", nullptr));
        heightfieldColumnsLabel->setText(QCoreApplication::translate("StartupSettingsDialog", "Heightfield Columns", nullptr));
        heightfieldHeightLabel->setText(QCoreApplication::translate("StartupSettingsDialog", "Heightfield Height", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartupSettingsDialog: public Ui_StartupSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUPSETTINGSDIALOG_H
