/********************************************************************************
** Form generated from reading UI file 'printdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTDIALOG_H
#define UI_PRINTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrintDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PrintDialog)
    {
        if (PrintDialog->objectName().isEmpty())
            PrintDialog->setObjectName(QString::fromUtf8("PrintDialog"));
        PrintDialog->setWindowModality(Qt::NonModal);
        PrintDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(PrintDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line = new QFrame(PrintDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(PrintDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PrintDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PrintDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PrintDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PrintDialog);
    } // setupUi

    void retranslateUi(QDialog *PrintDialog)
    {
        PrintDialog->setWindowTitle(QApplication::translate("PrintDialog", "Print - X2Go Client", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PrintDialog: public Ui_PrintDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTDIALOG_H
