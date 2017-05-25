/********************************************************************************
** Form generated from reading UI file 'contest.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTEST_H
#define UI_CONTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConTest
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *prhttps;
    QProgressBar *prssh;
    QProgressBar *prspeed;
    QVBoxLayout *verticalLayout_3;
    QLabel *lhttps;
    QLabel *lssh;
    QLabel *lspeed;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConTest)
    {
        if (ConTest->objectName().isEmpty())
            ConTest->setObjectName(QString::fromUtf8("ConTest"));
        ConTest->resize(336, 161);
        verticalLayout_4 = new QVBoxLayout(ConTest);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ConTest);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(ConTest);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(ConTest);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        prhttps = new QProgressBar(ConTest);
        prhttps->setObjectName(QString::fromUtf8("prhttps"));
        prhttps->setValue(24);
        prhttps->setTextVisible(false);
        prhttps->setInvertedAppearance(false);

        verticalLayout_2->addWidget(prhttps);

        prssh = new QProgressBar(ConTest);
        prssh->setObjectName(QString::fromUtf8("prssh"));
        prssh->setValue(24);
        prssh->setTextVisible(false);

        verticalLayout_2->addWidget(prssh);

        prspeed = new QProgressBar(ConTest);
        prspeed->setObjectName(QString::fromUtf8("prspeed"));
        prspeed->setValue(24);
        prspeed->setTextVisible(false);

        verticalLayout_2->addWidget(prspeed);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lhttps = new QLabel(ConTest);
        lhttps->setObjectName(QString::fromUtf8("lhttps"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(146, 145, 144, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lhttps->setPalette(palette);

        verticalLayout_3->addWidget(lhttps);

        lssh = new QLabel(ConTest);
        lssh->setObjectName(QString::fromUtf8("lssh"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lssh->setPalette(palette1);

        verticalLayout_3->addWidget(lssh);

        lspeed = new QLabel(ConTest);
        lspeed->setObjectName(QString::fromUtf8("lspeed"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lspeed->setPalette(palette2);

        verticalLayout_3->addWidget(lspeed);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ConTest);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Retry);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(ConTest);
        QObject::connect(buttonBox, SIGNAL(rejected()), ConTest, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), ConTest, SLOT(start()));

        QMetaObject::connectSlotsByName(ConTest);
    } // setupUi

    void retranslateUi(QDialog *ConTest)
    {
        ConTest->setWindowTitle(QApplication::translate("ConTest", "Connectivity test", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ConTest", "HTTPS connection:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ConTest", "SSH connection:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ConTest", "Connection speed:", 0, QApplication::UnicodeUTF8));
        lhttps->setText(QApplication::translate("ConTest", "Failed", 0, QApplication::UnicodeUTF8));
        lssh->setText(QApplication::translate("ConTest", "Failed", 0, QApplication::UnicodeUTF8));
        lspeed->setText(QApplication::translate("ConTest", "0 Kb/s", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConTest: public Ui_ConTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTEST_H
