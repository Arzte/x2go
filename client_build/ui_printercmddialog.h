/********************************************************************************
** Form generated from reading UI file 'printercmddialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTERCMDDIALOG_H
#define UI_PRINTERCMDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrinterCmdDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *leCmd;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QRadioButton *rbPDF;
    QRadioButton *rbPS;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QRadioButton *rbStdIn;
    QRadioButton *rbParam;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PrinterCmdDialog)
    {
        if (PrinterCmdDialog->objectName().isEmpty())
            PrinterCmdDialog->setObjectName(QString::fromUtf8("PrinterCmdDialog"));
        PrinterCmdDialog->resize(462, 542);
        verticalLayout_4 = new QVBoxLayout(PrinterCmdDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_2 = new QGroupBox(PrinterCmdDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        leCmd = new QLineEdit(groupBox_2);
        leCmd->setObjectName(QString::fromUtf8("leCmd"));

        verticalLayout_2->addWidget(leCmd);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox = new QGroupBox(PrinterCmdDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::PlainText);
        label_2->setScaledContents(false);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        rbPDF = new QRadioButton(groupBox);
        rbPDF->setObjectName(QString::fromUtf8("rbPDF"));

        verticalLayout->addWidget(rbPDF);

        rbPS = new QRadioButton(groupBox);
        rbPS->setObjectName(QString::fromUtf8("rbPS"));

        verticalLayout->addWidget(rbPS);

        rbPDF->raise();
        label_2->raise();
        rbPS->raise();

        verticalLayout_4->addWidget(groupBox);

        groupBox_3 = new QGroupBox(PrinterCmdDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setTextFormat(Qt::PlainText);
        label_3->setScaledContents(false);
        label_3->setWordWrap(true);

        verticalLayout_3->addWidget(label_3);

        rbStdIn = new QRadioButton(groupBox_3);
        rbStdIn->setObjectName(QString::fromUtf8("rbStdIn"));

        verticalLayout_3->addWidget(rbStdIn);

        rbParam = new QRadioButton(groupBox_3);
        rbParam->setObjectName(QString::fromUtf8("rbParam"));

        verticalLayout_3->addWidget(rbParam);


        verticalLayout_4->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(PrinterCmdDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(PrinterCmdDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), PrinterCmdDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PrinterCmdDialog);
    } // setupUi

    void retranslateUi(QDialog *PrinterCmdDialog)
    {
        PrinterCmdDialog->setWindowTitle(QApplication::translate("PrinterCmdDialog", "Printer command", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("PrinterCmdDialog", "Command", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PrinterCmdDialog", "Please enter your customized or individual printing command.\n"
"Examples:\n"
"kprinter\n"
"lpr -P hp_laserjet", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PrinterCmdDialog", "Output format", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PrinterCmdDialog", "Please choose the printing file format (regarding to your printing environment - if you use CUPS you may use PDF)", 0, QApplication::UnicodeUTF8));
        rbPDF->setText(QApplication::translate("PrinterCmdDialog", "PDF", 0, QApplication::UnicodeUTF8));
        rbPS->setText(QApplication::translate("PrinterCmdDialog", "PS", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("PrinterCmdDialog", "Data structure", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PrinterCmdDialog", "Please choose the method of printing file input (some commands accepting printing files as program options, some are awaiting data on standard input):", 0, QApplication::UnicodeUTF8));
        rbStdIn->setText(QApplication::translate("PrinterCmdDialog", "standard input (STDIN)", 0, QApplication::UnicodeUTF8));
        rbParam->setText(QApplication::translate("PrinterCmdDialog", "Specify path as program parameter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PrinterCmdDialog: public Ui_PrinterCmdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTERCMDDIALOG_H
