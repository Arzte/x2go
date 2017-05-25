/********************************************************************************
** Form generated from reading UI file 'printwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTWIDGET_H
#define UI_PRINTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrintWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbPrint;
    QRadioButton *rbView;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *gbPrint;
    QVBoxLayout *verticalLayout_3;
    QLabel *lWinPrinter;
    QComboBox *cbWinPrinter;
    QLabel *lWinInfo;
    QFrame *line;
    QCheckBox *cbPrintCmd;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lePrintCmd;
    QPushButton *pbPrintCmd;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *gbView;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbOpen;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *leOpenCmd;
    QRadioButton *rbSave;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *cbShowDialog;

    void setupUi(QWidget *PrintWidget)
    {
        if (PrintWidget->objectName().isEmpty())
            PrintWidget->setObjectName(QString::fromUtf8("PrintWidget"));
        PrintWidget->resize(559, 497);
        verticalLayout_5 = new QVBoxLayout(PrintWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rbPrint = new QRadioButton(PrintWidget);
        rbPrint->setObjectName(QString::fromUtf8("rbPrint"));
        rbPrint->setChecked(true);

        verticalLayout->addWidget(rbPrint);

        rbView = new QRadioButton(PrintWidget);
        rbView->setObjectName(QString::fromUtf8("rbView"));

        verticalLayout->addWidget(rbView);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gbPrint = new QGroupBox(PrintWidget);
        gbPrint->setObjectName(QString::fromUtf8("gbPrint"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gbPrint->sizePolicy().hasHeightForWidth());
        gbPrint->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(gbPrint);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lWinPrinter = new QLabel(gbPrint);
        lWinPrinter->setObjectName(QString::fromUtf8("lWinPrinter"));

        verticalLayout_3->addWidget(lWinPrinter);

        cbWinPrinter = new QComboBox(gbPrint);
        cbWinPrinter->setObjectName(QString::fromUtf8("cbWinPrinter"));

        verticalLayout_3->addWidget(cbWinPrinter);

        lWinInfo = new QLabel(gbPrint);
        lWinInfo->setObjectName(QString::fromUtf8("lWinInfo"));

        verticalLayout_3->addWidget(lWinInfo);

        line = new QFrame(gbPrint);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        cbPrintCmd = new QCheckBox(gbPrint);
        cbPrintCmd->setObjectName(QString::fromUtf8("cbPrintCmd"));

        verticalLayout_3->addWidget(cbPrintCmd);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lePrintCmd = new QLineEdit(gbPrint);
        lePrintCmd->setObjectName(QString::fromUtf8("lePrintCmd"));
        lePrintCmd->setEnabled(false);
        lePrintCmd->setReadOnly(true);

        horizontalLayout_3->addWidget(lePrintCmd);

        pbPrintCmd = new QPushButton(gbPrint);
        pbPrintCmd->setObjectName(QString::fromUtf8("pbPrintCmd"));
        pbPrintCmd->setEnabled(false);

        horizontalLayout_3->addWidget(pbPrintCmd);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(325, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        verticalLayout_4->addWidget(gbPrint);

        gbView = new QGroupBox(PrintWidget);
        gbView->setObjectName(QString::fromUtf8("gbView"));
        sizePolicy.setHeightForWidth(gbView->sizePolicy().hasHeightForWidth());
        gbView->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(gbView);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rbOpen = new QRadioButton(gbView);
        rbOpen->setObjectName(QString::fromUtf8("rbOpen"));
        rbOpen->setChecked(true);

        verticalLayout_2->addWidget(rbOpen);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(gbView);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        leOpenCmd = new QLineEdit(gbView);
        leOpenCmd->setObjectName(QString::fromUtf8("leOpenCmd"));

        horizontalLayout_2->addWidget(leOpenCmd);


        verticalLayout_2->addLayout(horizontalLayout_2);

        rbSave = new QRadioButton(gbView);
        rbSave->setObjectName(QString::fromUtf8("rbSave"));
        rbSave->setChecked(false);

        verticalLayout_2->addWidget(rbSave);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_4->addWidget(gbView);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout);

        cbShowDialog = new QCheckBox(PrintWidget);
        cbShowDialog->setObjectName(QString::fromUtf8("cbShowDialog"));
        cbShowDialog->setChecked(true);

        verticalLayout_5->addWidget(cbShowDialog);


        retranslateUi(PrintWidget);
        QObject::connect(rbOpen, SIGNAL(toggled(bool)), label, SLOT(setEnabled(bool)));
        QObject::connect(rbOpen, SIGNAL(toggled(bool)), leOpenCmd, SLOT(setEnabled(bool)));
        QObject::connect(cbPrintCmd, SIGNAL(toggled(bool)), lePrintCmd, SLOT(setEnabled(bool)));
        QObject::connect(cbPrintCmd, SIGNAL(toggled(bool)), pbPrintCmd, SLOT(setEnabled(bool)));
        QObject::connect(rbPrint, SIGNAL(toggled(bool)), gbPrint, SLOT(setVisible(bool)));
        QObject::connect(rbView, SIGNAL(toggled(bool)), gbView, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(PrintWidget);
    } // setupUi

    void retranslateUi(QWidget *PrintWidget)
    {
        PrintWidget->setWindowTitle(QApplication::translate("PrintWidget", "Form", 0, QApplication::UnicodeUTF8));
        rbPrint->setText(QApplication::translate("PrintWidget", "Print", 0, QApplication::UnicodeUTF8));
        rbView->setText(QApplication::translate("PrintWidget", "View as PDF", 0, QApplication::UnicodeUTF8));
        gbPrint->setTitle(QApplication::translate("PrintWidget", "Print settings", 0, QApplication::UnicodeUTF8));
        lWinPrinter->setText(QApplication::translate("PrintWidget", "Printer:", 0, QApplication::UnicodeUTF8));
        lWinInfo->setText(QApplication::translate("PrintWidget", "Print using default Windows PDF Viewer\n"
"(Viewer application needs to be installed)", 0, QApplication::UnicodeUTF8));
        cbPrintCmd->setText(QApplication::translate("PrintWidget", "Printer command:", 0, QApplication::UnicodeUTF8));
        pbPrintCmd->setText(QApplication::translate("PrintWidget", "...", 0, QApplication::UnicodeUTF8));
        gbView->setTitle(QApplication::translate("PrintWidget", "Viewer settings", 0, QApplication::UnicodeUTF8));
        rbOpen->setText(QApplication::translate("PrintWidget", "Open in viewer application", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PrintWidget", "Command:", 0, QApplication::UnicodeUTF8));
        rbSave->setText(QApplication::translate("PrintWidget", "Save to disk", 0, QApplication::UnicodeUTF8));
        cbShowDialog->setText(QApplication::translate("PrintWidget", "Show this dialog before start printing", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PrintWidget: public Ui_PrintWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTWIDGET_H
