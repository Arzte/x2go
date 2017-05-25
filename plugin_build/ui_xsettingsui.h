/********************************************************************************
** Form generated from reading UI file 'xsettingsui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSETTINGSUI_H
#define UI_XSETTINGSUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
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

class Ui_XSettingsWidgetUI
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QRadioButton *rbXming;
    QCheckBox *cbNoPrimary;
    QRadioButton *rbOther;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leExec;
    QPushButton *pbExec;
    QCheckBox *cbOnstart;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *leCmdOptions;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *leWinMod;
    QLabel *label_4;
    QLineEdit *leFSMod;
    QLabel *label_5;
    QLineEdit *leSingApp;
    QLabel *label_6;
    QLineEdit *leWholeDisplay;

    void setupUi(QWidget *XSettingsWidgetUI)
    {
        if (XSettingsWidgetUI->objectName().isEmpty())
            XSettingsWidgetUI->setObjectName(QString::fromUtf8("XSettingsWidgetUI"));
        XSettingsWidgetUI->resize(583, 495);
        verticalLayout = new QVBoxLayout(XSettingsWidgetUI);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(XSettingsWidgetUI);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setWordWrap(true);

        verticalLayout->addWidget(label_7);

        verticalSpacer = new QSpacerItem(20, 97, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        rbXming = new QRadioButton(XSettingsWidgetUI);
        rbXming->setObjectName(QString::fromUtf8("rbXming"));
        rbXming->setChecked(true);

        verticalLayout->addWidget(rbXming);

        cbNoPrimary = new QCheckBox(XSettingsWidgetUI);
        cbNoPrimary->setObjectName(QString::fromUtf8("cbNoPrimary"));

        verticalLayout->addWidget(cbNoPrimary);

        rbOther = new QRadioButton(XSettingsWidgetUI);
        rbOther->setObjectName(QString::fromUtf8("rbOther"));

        verticalLayout->addWidget(rbOther);

        groupBox = new QGroupBox(XSettingsWidgetUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(false);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        leExec = new QLineEdit(groupBox);
        leExec->setObjectName(QString::fromUtf8("leExec"));
        leExec->setReadOnly(true);

        horizontalLayout->addWidget(leExec);

        pbExec = new QPushButton(groupBox);
        pbExec->setObjectName(QString::fromUtf8("pbExec"));

        horizontalLayout->addWidget(pbExec);


        verticalLayout_2->addLayout(horizontalLayout);

        cbOnstart = new QCheckBox(groupBox);
        cbOnstart->setObjectName(QString::fromUtf8("cbOnstart"));
        cbOnstart->setChecked(false);

        verticalLayout_2->addWidget(cbOnstart);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        leCmdOptions = new QLineEdit(groupBox);
        leCmdOptions->setObjectName(QString::fromUtf8("leCmdOptions"));

        horizontalLayout_2->addWidget(leCmdOptions);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        leWinMod = new QLineEdit(groupBox_2);
        leWinMod->setObjectName(QString::fromUtf8("leWinMod"));

        gridLayout->addWidget(leWinMod, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        leFSMod = new QLineEdit(groupBox_2);
        leFSMod->setObjectName(QString::fromUtf8("leFSMod"));

        gridLayout->addWidget(leFSMod, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        leSingApp = new QLineEdit(groupBox_2);
        leSingApp->setObjectName(QString::fromUtf8("leSingApp"));

        gridLayout->addWidget(leSingApp, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        leWholeDisplay = new QLineEdit(groupBox_2);
        leWholeDisplay->setObjectName(QString::fromUtf8("leWholeDisplay"));

        gridLayout->addWidget(leWholeDisplay, 3, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);


        verticalLayout->addWidget(groupBox);


        retranslateUi(XSettingsWidgetUI);
        QObject::connect(rbOther, SIGNAL(toggled(bool)), groupBox, SLOT(setEnabled(bool)));
        QObject::connect(cbOnstart, SIGNAL(toggled(bool)), label_2, SLOT(setVisible(bool)));
        QObject::connect(cbOnstart, SIGNAL(toggled(bool)), leCmdOptions, SLOT(setVisible(bool)));
        QObject::connect(cbOnstart, SIGNAL(toggled(bool)), groupBox_2, SLOT(setHidden(bool)));
        QObject::connect(pbExec, SIGNAL(clicked()), XSettingsWidgetUI, SLOT(slotSetExecutable()));
        QObject::connect(rbXming, SIGNAL(toggled(bool)), cbNoPrimary, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(XSettingsWidgetUI);
    } // setupUi

    void retranslateUi(QWidget *XSettingsWidgetUI)
    {
        XSettingsWidgetUI->setWindowTitle(QApplication::translate("XSettingsWidgetUI", "Form", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("XSettingsWidgetUI", "You must restart the X2Go Client for the changes to take effect", 0, QApplication::UnicodeUTF8));
        rbXming->setText(QApplication::translate("XSettingsWidgetUI", "use integrated X-Server", 0, QApplication::UnicodeUTF8));
        cbNoPrimary->setText(QApplication::translate("XSettingsWidgetUI", " do not use primary clipboard", 0, QApplication::UnicodeUTF8));
        rbOther->setText(QApplication::translate("XSettingsWidgetUI", "use custom X-Server", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("XSettingsWidgetUI", "custom X-Server", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("XSettingsWidgetUI", "executable:", 0, QApplication::UnicodeUTF8));
        pbExec->setText(QString());
        cbOnstart->setText(QApplication::translate("XSettingsWidgetUI", "start X-Server on X2Go Client start", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("XSettingsWidgetUI", "command line options:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("XSettingsWidgetUI", "X-Server command line options", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("XSettingsWidgetUI", "window mode:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("XSettingsWidgetUI", "fullscreen mode:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("XSettingsWidgetUI", "single application:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("XSettingsWidgetUI", "whole display:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class XSettingsWidgetUI: public Ui_XSettingsWidgetUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSETTINGSUI_H
