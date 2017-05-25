/********************************************************************************
** Form generated from reading UI file 'brokerpassdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROKERPASSDIALOG_H
#define UI_BROKERPASSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BrokerPassDialogUi
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leOldPas;
    QLabel *label_2;
    QLineEdit *lePass1;
    QLabel *label_3;
    QLineEdit *lePass2;
    QSpacerItem *verticalSpacer;
    QLabel *statusLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BrokerPassDialogUi)
    {
        if (BrokerPassDialogUi->objectName().isEmpty())
            BrokerPassDialogUi->setObjectName(QString::fromUtf8("BrokerPassDialogUi"));
        BrokerPassDialogUi->resize(311, 176);
        verticalLayout = new QVBoxLayout(BrokerPassDialogUi);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(BrokerPassDialogUi);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leOldPas = new QLineEdit(BrokerPassDialogUi);
        leOldPas->setObjectName(QString::fromUtf8("leOldPas"));
        leOldPas->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(leOldPas, 0, 1, 1, 1);

        label_2 = new QLabel(BrokerPassDialogUi);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lePass1 = new QLineEdit(BrokerPassDialogUi);
        lePass1->setObjectName(QString::fromUtf8("lePass1"));
        lePass1->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lePass1, 1, 1, 1, 1);

        label_3 = new QLabel(BrokerPassDialogUi);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lePass2 = new QLineEdit(BrokerPassDialogUi);
        lePass2->setObjectName(QString::fromUtf8("lePass2"));
        lePass2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lePass2, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        statusLabel = new QLabel(BrokerPassDialogUi);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        verticalLayout->addWidget(statusLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(BrokerPassDialogUi);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BrokerPassDialogUi);
        QObject::connect(buttonBox, SIGNAL(accepted()), BrokerPassDialogUi, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BrokerPassDialogUi, SLOT(reject()));
        QObject::connect(lePass1, SIGNAL(textChanged(QString)), BrokerPassDialogUi, SLOT(slotPassChanged()));
        QObject::connect(lePass2, SIGNAL(textChanged(QString)), BrokerPassDialogUi, SLOT(slotPassChanged()));

        QMetaObject::connectSlotsByName(BrokerPassDialogUi);
    } // setupUi

    void retranslateUi(QDialog *BrokerPassDialogUi)
    {
        BrokerPassDialogUi->setWindowTitle(QApplication::translate("BrokerPassDialogUi", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BrokerPassDialogUi", "Old password:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BrokerPassDialogUi", "New password:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BrokerPassDialogUi", "Confirm password:", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("BrokerPassDialogUi", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BrokerPassDialogUi: public Ui_BrokerPassDialogUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROKERPASSDIALOG_H
