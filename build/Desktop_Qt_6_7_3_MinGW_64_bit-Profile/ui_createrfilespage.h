/********************************************************************************
** Form generated from reading UI file 'createrfilespage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATERFILESPAGE_H
#define UI_CREATERFILESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreaterFilesPage
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_10;
    QTabWidget *tabWidget;
    QWidget *tab_create;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *path;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioButton_File;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *radioButton_Dir;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *create;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_delete;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *path_delete;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *radioButton_File_delete;
    QSpacerItem *horizontalSpacer_9;
    QRadioButton *radioButton_Dir_delete;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *delete_btn;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreaterFilesPage)
    {
        if (CreaterFilesPage->objectName().isEmpty())
            CreaterFilesPage->setObjectName("CreaterFilesPage");
        CreaterFilesPage->resize(507, 287);
        centralwidget = new QWidget(CreaterFilesPage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_10 = new QHBoxLayout(centralwidget);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget->setTabShape(QTabWidget::TabShape::Triangular);
        tabWidget->setElideMode(Qt::TextElideMode::ElideNone);
        tab_create = new QWidget();
        tab_create->setObjectName("tab_create");
        horizontalLayout_5 = new QHBoxLayout(tab_create);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(tab_create);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        path = new QLineEdit(tab_create);
        path->setObjectName("path");

        horizontalLayout_2->addWidget(path);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        radioButton_File = new QRadioButton(tab_create);
        radioButton_File->setObjectName("radioButton_File");

        horizontalLayout->addWidget(radioButton_File);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        radioButton_Dir = new QRadioButton(tab_create);
        radioButton_Dir->setObjectName("radioButton_Dir");

        horizontalLayout->addWidget(radioButton_Dir);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        create = new QPushButton(tab_create);
        create->setObjectName("create");

        horizontalLayout_3->addWidget(create);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_create, QString());
        tab_delete = new QWidget();
        tab_delete->setObjectName("tab_delete");
        verticalLayout_5 = new QVBoxLayout(tab_delete);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_2 = new QLabel(tab_delete);
        label_2->setObjectName("label_2");

        horizontalLayout_7->addWidget(label_2);

        path_delete = new QLineEdit(tab_delete);
        path_delete->setObjectName("path_delete");

        horizontalLayout_7->addWidget(path_delete);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        radioButton_File_delete = new QRadioButton(tab_delete);
        radioButton_File_delete->setObjectName("radioButton_File_delete");

        horizontalLayout_8->addWidget(radioButton_File_delete);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        radioButton_Dir_delete = new QRadioButton(tab_delete);
        radioButton_Dir_delete->setObjectName("radioButton_Dir_delete");

        horizontalLayout_8->addWidget(radioButton_Dir_delete);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        delete_btn = new QPushButton(tab_delete);
        delete_btn->setObjectName("delete_btn");

        horizontalLayout_9->addWidget(delete_btn);


        verticalLayout_4->addLayout(horizontalLayout_9);


        horizontalLayout_6->addLayout(verticalLayout_4);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        verticalLayout_5->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_delete, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());

        horizontalLayout_10->addWidget(tabWidget);

        CreaterFilesPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreaterFilesPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 507, 21));
        CreaterFilesPage->setMenuBar(menubar);
        statusbar = new QStatusBar(CreaterFilesPage);
        statusbar->setObjectName("statusbar");
        CreaterFilesPage->setStatusBar(statusbar);

        retranslateUi(CreaterFilesPage);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CreaterFilesPage);
    } // setupUi

    void retranslateUi(QMainWindow *CreaterFilesPage)
    {
        CreaterFilesPage->setWindowTitle(QCoreApplication::translate("CreaterFilesPage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("CreaterFilesPage", "Path", nullptr));
        radioButton_File->setText(QCoreApplication::translate("CreaterFilesPage", "File", nullptr));
        radioButton_Dir->setText(QCoreApplication::translate("CreaterFilesPage", "Directory", nullptr));
        create->setText(QCoreApplication::translate("CreaterFilesPage", "Create", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_create), QCoreApplication::translate("CreaterFilesPage", "Create", nullptr));
        label_2->setText(QCoreApplication::translate("CreaterFilesPage", "Path", nullptr));
        radioButton_File_delete->setText(QCoreApplication::translate("CreaterFilesPage", "File", nullptr));
        radioButton_Dir_delete->setText(QCoreApplication::translate("CreaterFilesPage", "Directory", nullptr));
        delete_btn->setText(QCoreApplication::translate("CreaterFilesPage", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_delete), QCoreApplication::translate("CreaterFilesPage", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CreaterFilesPage", "Multiply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreaterFilesPage: public Ui_CreaterFilesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATERFILESPAGE_H
