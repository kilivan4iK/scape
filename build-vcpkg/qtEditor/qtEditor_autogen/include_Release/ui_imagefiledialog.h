/********************************************************************************
** Form generated from reading UI file 'imagefiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEFILEDIALOG_H
#define UI_IMAGEFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImageFileDialog
{
public:
    QVBoxLayout *imageFileDialogLayout;
    QGroupBox *formatBox;
    QVBoxLayout *formatBoxLayout;
    QComboBox *formatComboBox;
    QPlainTextEdit *formatDescriptionTextEdit;
    QGroupBox *optionsGroupBox;
    QGridLayout *optionsGroupBoxLayout;
    QComboBox *bppComboBox;
    QCheckBox *flipyCheckBox;
    QLabel *heightLabel;
    QLineEdit *widthLineEdit;
    QCheckBox *flipxCheckBox;
    QLineEdit *heightLineEdit;
    QLabel *bppLabel;
    QLabel *widthLabel;
    QLabel *endiannessLabel;
    QComboBox *endiannessComboBox;
    QGroupBox *fileGroupBox;
    QHBoxLayout *fileGroupBoxLayout;
    QLineEdit *fileLineEdit;
    QPushButton *openFilePushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImageFileDialog)
    {
        if (ImageFileDialog->objectName().isEmpty())
            ImageFileDialog->setObjectName(QString::fromUtf8("ImageFileDialog"));
        ImageFileDialog->resize(350, 531);
        imageFileDialogLayout = new QVBoxLayout(ImageFileDialog);
        imageFileDialogLayout->setObjectName(QString::fromUtf8("imageFileDialogLayout"));
        formatBox = new QGroupBox(ImageFileDialog);
        formatBox->setObjectName(QString::fromUtf8("formatBox"));
        formatBoxLayout = new QVBoxLayout(formatBox);
        formatBoxLayout->setObjectName(QString::fromUtf8("formatBoxLayout"));
        formatComboBox = new QComboBox(formatBox);
        formatComboBox->setObjectName(QString::fromUtf8("formatComboBox"));

        formatBoxLayout->addWidget(formatComboBox);

        formatDescriptionTextEdit = new QPlainTextEdit(formatBox);
        formatDescriptionTextEdit->setObjectName(QString::fromUtf8("formatDescriptionTextEdit"));
        formatDescriptionTextEdit->setReadOnly(true);

        formatBoxLayout->addWidget(formatDescriptionTextEdit);


        imageFileDialogLayout->addWidget(formatBox);

        optionsGroupBox = new QGroupBox(ImageFileDialog);
        optionsGroupBox->setObjectName(QString::fromUtf8("optionsGroupBox"));
        optionsGroupBoxLayout = new QGridLayout(optionsGroupBox);
        optionsGroupBoxLayout->setObjectName(QString::fromUtf8("optionsGroupBoxLayout"));
        bppComboBox = new QComboBox(optionsGroupBox);
        bppComboBox->setObjectName(QString::fromUtf8("bppComboBox"));

        optionsGroupBoxLayout->addWidget(bppComboBox, 4, 1, 1, 1);

        flipyCheckBox = new QCheckBox(optionsGroupBox);
        flipyCheckBox->setObjectName(QString::fromUtf8("flipyCheckBox"));

        optionsGroupBoxLayout->addWidget(flipyCheckBox, 1, 0, 1, 1);

        heightLabel = new QLabel(optionsGroupBox);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));

        optionsGroupBoxLayout->addWidget(heightLabel, 3, 0, 1, 1);

        widthLineEdit = new QLineEdit(optionsGroupBox);
        widthLineEdit->setObjectName(QString::fromUtf8("widthLineEdit"));

        optionsGroupBoxLayout->addWidget(widthLineEdit, 2, 1, 1, 1);

        flipxCheckBox = new QCheckBox(optionsGroupBox);
        flipxCheckBox->setObjectName(QString::fromUtf8("flipxCheckBox"));

        optionsGroupBoxLayout->addWidget(flipxCheckBox, 0, 0, 1, 1);

        heightLineEdit = new QLineEdit(optionsGroupBox);
        heightLineEdit->setObjectName(QString::fromUtf8("heightLineEdit"));

        optionsGroupBoxLayout->addWidget(heightLineEdit, 3, 1, 1, 1);

        bppLabel = new QLabel(optionsGroupBox);
        bppLabel->setObjectName(QString::fromUtf8("bppLabel"));

        optionsGroupBoxLayout->addWidget(bppLabel, 4, 0, 1, 1);

        widthLabel = new QLabel(optionsGroupBox);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));

        optionsGroupBoxLayout->addWidget(widthLabel, 2, 0, 1, 1);

        endiannessLabel = new QLabel(optionsGroupBox);
        endiannessLabel->setObjectName(QString::fromUtf8("endiannessLabel"));

        optionsGroupBoxLayout->addWidget(endiannessLabel, 5, 0, 1, 1);

        endiannessComboBox = new QComboBox(optionsGroupBox);
        endiannessComboBox->setObjectName(QString::fromUtf8("endiannessComboBox"));

        optionsGroupBoxLayout->addWidget(endiannessComboBox, 5, 1, 1, 1);


        imageFileDialogLayout->addWidget(optionsGroupBox);

        fileGroupBox = new QGroupBox(ImageFileDialog);
        fileGroupBox->setObjectName(QString::fromUtf8("fileGroupBox"));
        fileGroupBoxLayout = new QHBoxLayout(fileGroupBox);
        fileGroupBoxLayout->setObjectName(QString::fromUtf8("fileGroupBoxLayout"));
        fileLineEdit = new QLineEdit(fileGroupBox);
        fileLineEdit->setObjectName(QString::fromUtf8("fileLineEdit"));

        fileGroupBoxLayout->addWidget(fileLineEdit);

        openFilePushButton = new QPushButton(fileGroupBox);
        openFilePushButton->setObjectName(QString::fromUtf8("openFilePushButton"));

        fileGroupBoxLayout->addWidget(openFilePushButton);


        imageFileDialogLayout->addWidget(fileGroupBox);

        buttonBox = new QDialogButtonBox(ImageFileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        imageFileDialogLayout->addWidget(buttonBox);


        retranslateUi(ImageFileDialog);

        QMetaObject::connectSlotsByName(ImageFileDialog);
    } // setupUi

    void retranslateUi(QDialog *ImageFileDialog)
    {
        ImageFileDialog->setWindowTitle(QString());
        formatBox->setTitle(QCoreApplication::translate("ImageFileDialog", "Format", nullptr));
        optionsGroupBox->setTitle(QCoreApplication::translate("ImageFileDialog", "Options", nullptr));
        flipyCheckBox->setText(QCoreApplication::translate("ImageFileDialog", "Flip Y", nullptr));
        heightLabel->setText(QCoreApplication::translate("ImageFileDialog", "Height", nullptr));
        flipxCheckBox->setText(QCoreApplication::translate("ImageFileDialog", "Flip X", nullptr));
        bppLabel->setText(QCoreApplication::translate("ImageFileDialog", "Bits per pixel", nullptr));
        widthLabel->setText(QCoreApplication::translate("ImageFileDialog", "Width", nullptr));
        endiannessLabel->setText(QCoreApplication::translate("ImageFileDialog", "Endianness", nullptr));
        fileGroupBox->setTitle(QCoreApplication::translate("ImageFileDialog", "File", nullptr));
        openFilePushButton->setText(QCoreApplication::translate("ImageFileDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageFileDialog: public Ui_ImageFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEFILEDIALOG_H
