/********************************************************************************
** Form generated from reading UI file 'brushsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRUSHSETTINGSWIDGET_H
#define UI_BRUSHSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrushSettingsWidget
{
public:
    QGridLayout *mainLayout;
    QLabel *radiusLabel;
    QDoubleSpinBox *radiusSpinBox;
    QSlider *radiusSlider;
    QLabel *outerRadiusLabel;
    QDoubleSpinBox *outerRadiusSpinBox;
    QSlider *outerRadiusSlider;
    QLabel *innerRadiusLabel;
    QDoubleSpinBox *innerRadiusSpinBox;
    QSlider *innerRadiusSlider;
    QLabel *rampPowerLabel;
    QDoubleSpinBox *rampPowerSpinBox;
    QSlider *rampPowerSlider;

    void setupUi(QWidget *BrushSettingsWidget)
    {
        if (BrushSettingsWidget->objectName().isEmpty())
            BrushSettingsWidget->setObjectName(QString::fromUtf8("BrushSettingsWidget"));
        BrushSettingsWidget->resize(269, 152);
        mainLayout = new QGridLayout(BrushSettingsWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        radiusLabel = new QLabel(BrushSettingsWidget);
        radiusLabel->setObjectName(QString::fromUtf8("radiusLabel"));

        mainLayout->addWidget(radiusLabel, 0, 0, 1, 1);

        radiusSpinBox = new QDoubleSpinBox(BrushSettingsWidget);
        radiusSpinBox->setObjectName(QString::fromUtf8("radiusSpinBox"));

        mainLayout->addWidget(radiusSpinBox, 0, 1, 1, 1);

        radiusSlider = new QSlider(BrushSettingsWidget);
        radiusSlider->setObjectName(QString::fromUtf8("radiusSlider"));
        radiusSlider->setOrientation(Qt::Horizontal);

        mainLayout->addWidget(radiusSlider, 0, 2, 1, 1);

        outerRadiusLabel = new QLabel(BrushSettingsWidget);
        outerRadiusLabel->setObjectName(QString::fromUtf8("outerRadiusLabel"));

        mainLayout->addWidget(outerRadiusLabel, 1, 0, 1, 1);

        outerRadiusSpinBox = new QDoubleSpinBox(BrushSettingsWidget);
        outerRadiusSpinBox->setObjectName(QString::fromUtf8("outerRadiusSpinBox"));

        mainLayout->addWidget(outerRadiusSpinBox, 1, 1, 1, 1);

        outerRadiusSlider = new QSlider(BrushSettingsWidget);
        outerRadiusSlider->setObjectName(QString::fromUtf8("outerRadiusSlider"));
        outerRadiusSlider->setOrientation(Qt::Horizontal);

        mainLayout->addWidget(outerRadiusSlider, 1, 2, 1, 1);

        innerRadiusLabel = new QLabel(BrushSettingsWidget);
        innerRadiusLabel->setObjectName(QString::fromUtf8("innerRadiusLabel"));

        mainLayout->addWidget(innerRadiusLabel, 2, 0, 1, 1);

        innerRadiusSpinBox = new QDoubleSpinBox(BrushSettingsWidget);
        innerRadiusSpinBox->setObjectName(QString::fromUtf8("innerRadiusSpinBox"));

        mainLayout->addWidget(innerRadiusSpinBox, 2, 1, 1, 1);

        innerRadiusSlider = new QSlider(BrushSettingsWidget);
        innerRadiusSlider->setObjectName(QString::fromUtf8("innerRadiusSlider"));
        innerRadiusSlider->setOrientation(Qt::Horizontal);

        mainLayout->addWidget(innerRadiusSlider, 2, 2, 1, 1);

        rampPowerLabel = new QLabel(BrushSettingsWidget);
        rampPowerLabel->setObjectName(QString::fromUtf8("rampPowerLabel"));

        mainLayout->addWidget(rampPowerLabel, 3, 0, 1, 1);

        rampPowerSpinBox = new QDoubleSpinBox(BrushSettingsWidget);
        rampPowerSpinBox->setObjectName(QString::fromUtf8("rampPowerSpinBox"));

        mainLayout->addWidget(rampPowerSpinBox, 3, 1, 1, 1);

        rampPowerSlider = new QSlider(BrushSettingsWidget);
        rampPowerSlider->setObjectName(QString::fromUtf8("rampPowerSlider"));
        rampPowerSlider->setOrientation(Qt::Horizontal);

        mainLayout->addWidget(rampPowerSlider, 3, 2, 1, 1);


        retranslateUi(BrushSettingsWidget);

        QMetaObject::connectSlotsByName(BrushSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *BrushSettingsWidget)
    {
        BrushSettingsWidget->setWindowTitle(QCoreApplication::translate("BrushSettingsWidget", "BrushSettingsWidget", nullptr));
        radiusLabel->setText(QCoreApplication::translate("BrushSettingsWidget", "Radius", nullptr));
        outerRadiusLabel->setText(QCoreApplication::translate("BrushSettingsWidget", "Outer Radius", nullptr));
        innerRadiusLabel->setText(QCoreApplication::translate("BrushSettingsWidget", "Inner Radius", nullptr));
        rampPowerLabel->setText(QCoreApplication::translate("BrushSettingsWidget", "Ramp Power", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrushSettingsWidget: public Ui_BrushSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRUSHSETTINGSWIDGET_H
