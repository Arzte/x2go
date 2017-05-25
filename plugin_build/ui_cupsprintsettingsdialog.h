/********************************************************************************
** Form generated from reading UI file 'cupsprintsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUPSPRINTSETTINGSDIALOG_H
#define UI_CUPSPRINTSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CupsPrinterSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cbPageSize;
    QLabel *label_2;
    QComboBox *cbMediaType;
    QLabel *label_3;
    QComboBox *cbInputSlot;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *gbDuplex;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *rbNone;
    QRadioButton *rbLong;
    QRadioButton *rbShort;
    QSpacerItem *verticalSpacer;
    QWidget *tabDriver;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter;
    QTreeWidget *ppdTree;
    QGroupBox *gbOptions;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *optionsTree;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CupsPrinterSettingsDialog)
    {
        if (CupsPrinterSettingsDialog->objectName().isEmpty())
            CupsPrinterSettingsDialog->setObjectName(QString::fromUtf8("CupsPrinterSettingsDialog"));
        CupsPrinterSettingsDialog->resize(503, 551);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CupsPrinterSettingsDialog->sizePolicy().hasHeightForWidth());
        CupsPrinterSettingsDialog->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(CupsPrinterSettingsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(CupsPrinterSettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        verticalLayout = new QVBoxLayout(tabGeneral);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(tabGeneral);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbPageSize = new QComboBox(tabGeneral);
        cbPageSize->setObjectName(QString::fromUtf8("cbPageSize"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cbPageSize->sizePolicy().hasHeightForWidth());
        cbPageSize->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(cbPageSize, 0, 1, 1, 1);

        label_2 = new QLabel(tabGeneral);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cbMediaType = new QComboBox(tabGeneral);
        cbMediaType->setObjectName(QString::fromUtf8("cbMediaType"));

        gridLayout->addWidget(cbMediaType, 1, 1, 1, 1);

        label_3 = new QLabel(tabGeneral);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        cbInputSlot = new QComboBox(tabGeneral);
        cbInputSlot->setObjectName(QString::fromUtf8("cbInputSlot"));

        gridLayout->addWidget(cbInputSlot, 2, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        gbDuplex = new QGroupBox(tabGeneral);
        gbDuplex->setObjectName(QString::fromUtf8("gbDuplex"));
        verticalLayout_3 = new QVBoxLayout(gbDuplex);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        rbNone = new QRadioButton(gbDuplex);
        rbNone->setObjectName(QString::fromUtf8("rbNone"));

        verticalLayout_3->addWidget(rbNone);

        rbLong = new QRadioButton(gbDuplex);
        rbLong->setObjectName(QString::fromUtf8("rbLong"));

        verticalLayout_3->addWidget(rbLong);

        rbShort = new QRadioButton(gbDuplex);
        rbShort->setObjectName(QString::fromUtf8("rbShort"));

        verticalLayout_3->addWidget(rbShort);


        verticalLayout->addWidget(gbDuplex);

        verticalSpacer = new QSpacerItem(20, 211, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tabGeneral, QString());
        tabDriver = new QWidget();
        tabDriver->setObjectName(QString::fromUtf8("tabDriver"));
        verticalLayout_5 = new QVBoxLayout(tabDriver);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        splitter = new QSplitter(tabDriver);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setEnabled(true);
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        ppdTree = new QTreeWidget(splitter);
        ppdTree->setObjectName(QString::fromUtf8("ppdTree"));
        ppdTree->setRootIsDecorated(false);
        ppdTree->setAnimated(true);
        ppdTree->setAllColumnsShowFocus(true);
        ppdTree->setHeaderHidden(true);
        ppdTree->setExpandsOnDoubleClick(false);
        splitter->addWidget(ppdTree);
        gbOptions = new QGroupBox(splitter);
        gbOptions->setObjectName(QString::fromUtf8("gbOptions"));
        verticalLayout_4 = new QVBoxLayout(gbOptions);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        optionsTree = new QTreeWidget(gbOptions);
        optionsTree->setObjectName(QString::fromUtf8("optionsTree"));
        optionsTree->setRootIsDecorated(false);
        optionsTree->setItemsExpandable(false);
        optionsTree->setHeaderHidden(true);
        optionsTree->setExpandsOnDoubleClick(false);

        verticalLayout_4->addWidget(optionsTree);

        splitter->addWidget(gbOptions);

        verticalLayout_5->addWidget(splitter);

        tabWidget->addTab(tabDriver, QString());

        verticalLayout_2->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(CupsPrinterSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(CupsPrinterSettingsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CupsPrinterSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *CupsPrinterSettingsDialog)
    {
        CupsPrinterSettingsDialog->setWindowTitle(QApplication::translate("CupsPrinterSettingsDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CupsPrinterSettingsDialog", "Page size:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CupsPrinterSettingsDialog", "Paper type:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CupsPrinterSettingsDialog", "Paper source:", 0, QApplication::UnicodeUTF8));
        gbDuplex->setTitle(QApplication::translate("CupsPrinterSettingsDialog", "Duplex Printing", 0, QApplication::UnicodeUTF8));
        rbNone->setText(QApplication::translate("CupsPrinterSettingsDialog", "None", 0, QApplication::UnicodeUTF8));
        rbLong->setText(QApplication::translate("CupsPrinterSettingsDialog", "Long side", 0, QApplication::UnicodeUTF8));
        rbShort->setText(QApplication::translate("CupsPrinterSettingsDialog", "Short side", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QApplication::translate("CupsPrinterSettingsDialog", "General", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = ppdTree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("CupsPrinterSettingsDialog", "Value", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("CupsPrinterSettingsDialog", "Option", 0, QApplication::UnicodeUTF8));
        gbOptions->setTitle(QApplication::translate("CupsPrinterSettingsDialog", "No option selected", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = optionsTree->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("CupsPrinterSettingsDialog", "text", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabDriver), QApplication::translate("CupsPrinterSettingsDialog", "Driver settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CupsPrinterSettingsDialog: public Ui_CupsPrinterSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUPSPRINTSETTINGSDIALOG_H
