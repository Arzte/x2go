/********************************************************************************
** Form generated from reading UI file 'helpdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HelpDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HelpDialog)
    {
        if (HelpDialog->objectName().isEmpty())
            HelpDialog->setObjectName(QString::fromUtf8("HelpDialog"));
        HelpDialog->resize(700, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons/32x32/x2goclient.png"), QSize(), QIcon::Normal, QIcon::Off);
        HelpDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HelpDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(HelpDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);

        buttonBox = new QDialogButtonBox(HelpDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(HelpDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), HelpDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(HelpDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpDialog)
    {
        HelpDialog->setWindowTitle(QApplication::translate("HelpDialog", "Options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelpDialog: public Ui_HelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
