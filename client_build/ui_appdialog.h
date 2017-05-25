/********************************************************************************
** Form generated from reading UI file 'appdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPDIALOG_H
#define UI_APPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AppDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *startButton;
    QSpacerItem *verticalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *AppDialog)
    {
        if (AppDialog->objectName().isEmpty())
            AppDialog->setObjectName(QString::fromUtf8("AppDialog"));
        AppDialog->resize(510, 400);
        horizontalLayout_2 = new QHBoxLayout(AppDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        treeWidget = new QTreeWidget(AppDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setIconSize(QSize(22, 22));
        treeWidget->setRootIsDecorated(true);
        treeWidget->setUniformRowHeights(true);
        treeWidget->setItemsExpandable(true);
        treeWidget->setSortingEnabled(false);
        treeWidget->setExpandsOnDoubleClick(false);
        treeWidget->header()->setVisible(false);

        verticalLayout_2->addWidget(treeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(AppDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(AppDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        startButton = new QPushButton(AppDialog);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        verticalLayout->addWidget(startButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        closeButton = new QPushButton(AppDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        verticalLayout->addWidget(closeButton);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(AppDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), AppDialog, SLOT(reject()));
        QObject::connect(treeWidget, SIGNAL(itemSelectionChanged()), AppDialog, SLOT(slotSelectedChanged()));
        QObject::connect(startButton, SIGNAL(clicked()), AppDialog, SLOT(slotStartSelected()));
        QObject::connect(treeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), AppDialog, SLOT(slotDoubleClicked(QTreeWidgetItem*)));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), AppDialog, SLOT(slotSearchChanged(QString)));

        QMetaObject::connectSlotsByName(AppDialog);
    } // setupUi

    void retranslateUi(QDialog *AppDialog)
    {
        AppDialog->setWindowTitle(QApplication::translate("AppDialog", "Published Applications", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AppDialog", "Search:", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("AppDialog", "&Start", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("AppDialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AppDialog: public Ui_AppDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPDIALOG_H
