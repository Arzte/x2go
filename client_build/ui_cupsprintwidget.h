/********************************************************************************
** Form generated from reading UI file 'cupsprintwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUPSPRINTWIDGET_H
#define UI_CUPSPRINTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CUPSPrintWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cbPrinters;
    QPushButton *pbProps;
    QLabel *label_2;
    QLabel *lState;
    QLabel *label_3;
    QLabel *lJAccept;
    QLabel *label_4;
    QLabel *lType;
    QLabel *label_5;
    QLabel *lLocation;
    QLabel *label_6;
    QLabel *lComment;

    void setupUi(QWidget *CUPSPrintWidget)
    {
        if (CUPSPrintWidget->objectName().isEmpty())
            CUPSPrintWidget->setObjectName(QString::fromUtf8("CUPSPrintWidget"));
        CUPSPrintWidget->resize(362, 292);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CUPSPrintWidget->sizePolicy().hasHeightForWidth());
        CUPSPrintWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(CUPSPrintWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(CUPSPrintWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbPrinters = new QComboBox(CUPSPrintWidget);
        cbPrinters->setObjectName(QString::fromUtf8("cbPrinters"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbPrinters->sizePolicy().hasHeightForWidth());
        cbPrinters->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cbPrinters, 0, 1, 1, 1);

        pbProps = new QPushButton(CUPSPrintWidget);
        pbProps->setObjectName(QString::fromUtf8("pbProps"));

        gridLayout->addWidget(pbProps, 0, 2, 1, 1);

        label_2 = new QLabel(CUPSPrintWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lState = new QLabel(CUPSPrintWidget);
        lState->setObjectName(QString::fromUtf8("lState"));

        gridLayout->addWidget(lState, 1, 1, 1, 2);

        label_3 = new QLabel(CUPSPrintWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lJAccept = new QLabel(CUPSPrintWidget);
        lJAccept->setObjectName(QString::fromUtf8("lJAccept"));

        gridLayout->addWidget(lJAccept, 2, 1, 1, 2);

        label_4 = new QLabel(CUPSPrintWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lType = new QLabel(CUPSPrintWidget);
        lType->setObjectName(QString::fromUtf8("lType"));

        gridLayout->addWidget(lType, 3, 1, 1, 2);

        label_5 = new QLabel(CUPSPrintWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lLocation = new QLabel(CUPSPrintWidget);
        lLocation->setObjectName(QString::fromUtf8("lLocation"));

        gridLayout->addWidget(lLocation, 4, 1, 1, 2);

        label_6 = new QLabel(CUPSPrintWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lComment = new QLabel(CUPSPrintWidget);
        lComment->setObjectName(QString::fromUtf8("lComment"));

        gridLayout->addWidget(lComment, 5, 1, 1, 2);


        retranslateUi(CUPSPrintWidget);

        QMetaObject::connectSlotsByName(CUPSPrintWidget);
    } // setupUi

    void retranslateUi(QWidget *CUPSPrintWidget)
    {
        CUPSPrintWidget->setWindowTitle(QApplication::translate("CUPSPrintWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CUPSPrintWidget", "Name:", 0, QApplication::UnicodeUTF8));
        pbProps->setText(QApplication::translate("CUPSPrintWidget", "Properties", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CUPSPrintWidget", "State:", 0, QApplication::UnicodeUTF8));
        lState->setText(QString());
        label_3->setText(QApplication::translate("CUPSPrintWidget", "Accepting jobs:", 0, QApplication::UnicodeUTF8));
        lJAccept->setText(QString());
        label_4->setText(QApplication::translate("CUPSPrintWidget", "Type:", 0, QApplication::UnicodeUTF8));
        lType->setText(QString());
        label_5->setText(QApplication::translate("CUPSPrintWidget", "Location:", 0, QApplication::UnicodeUTF8));
        lLocation->setText(QString());
        label_6->setText(QApplication::translate("CUPSPrintWidget", "Comment:", 0, QApplication::UnicodeUTF8));
        lComment->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CUPSPrintWidget: public Ui_CUPSPrintWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUPSPRINTWIDGET_H
