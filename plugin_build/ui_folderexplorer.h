/********************************************************************************
** Form generated from reading UI file 'folderexplorer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDEREXPLORER_H
#define UI_FOLDEREXPLORER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FolderExplorer
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FolderExplorer)
    {
        if (FolderExplorer->objectName().isEmpty())
            FolderExplorer->setObjectName(QString::fromUtf8("FolderExplorer"));
        FolderExplorer->resize(400, 300);
        verticalLayout = new QVBoxLayout(FolderExplorer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(FolderExplorer);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidget->setRootIsDecorated(false);
        treeWidget->header()->setVisible(false);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(FolderExplorer);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FolderExplorer);
        QObject::connect(buttonBox, SIGNAL(accepted()), FolderExplorer, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FolderExplorer, SLOT(reject()));
        QObject::connect(treeWidget, SIGNAL(customContextMenuRequested(QPoint)), FolderExplorer, SLOT(slotContextMenu(QPoint)));
        QObject::connect(treeWidget, SIGNAL(itemActivated(QTreeWidgetItem*,int)), FolderExplorer, SLOT(slotItemSelected(QTreeWidgetItem*,int)));

        QMetaObject::connectSlotsByName(FolderExplorer);
    } // setupUi

    void retranslateUi(QDialog *FolderExplorer)
    {
        FolderExplorer->setWindowTitle(QApplication::translate("FolderExplorer", "Folders", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FolderExplorer: public Ui_FolderExplorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDEREXPLORER_H
