/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Duankou;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_Open;
    QPushButton *Button_ClearRecord;
    QPushButton *Button_ClearContent;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit_Record;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_SendData;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Button_SendData;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(778, 597);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_Duankou = new QLineEdit(widget);
        lineEdit_Duankou->setObjectName(QString::fromUtf8("lineEdit_Duankou"));

        horizontalLayout->addWidget(lineEdit_Duankou);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Button_Open = new QPushButton(widget);
        Button_Open->setObjectName(QString::fromUtf8("Button_Open"));

        horizontalLayout->addWidget(Button_Open);

        Button_ClearRecord = new QPushButton(widget);
        Button_ClearRecord->setObjectName(QString::fromUtf8("Button_ClearRecord"));

        horizontalLayout->addWidget(Button_ClearRecord);

        Button_ClearContent = new QPushButton(widget);
        Button_ClearContent->setObjectName(QString::fromUtf8("Button_ClearContent"));

        horizontalLayout->addWidget(Button_ClearContent);


        verticalLayout_3->addWidget(widget);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textEdit_Record = new QTextEdit(groupBox);
        textEdit_Record->setObjectName(QString::fromUtf8("textEdit_Record"));
        textEdit_Record->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit_Record);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit_SendData = new QTextEdit(groupBox_2);
        textEdit_SendData->setObjectName(QString::fromUtf8("textEdit_SendData"));

        verticalLayout->addWidget(textEdit_SendData);

        widget_2 = new QWidget(groupBox_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Button_SendData = new QPushButton(widget_2);
        Button_SendData->setObjectName(QString::fromUtf8("Button_SendData"));

        horizontalLayout_2->addWidget(Button_SendData);

        horizontalSpacer_3 = new QSpacerItem(79, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_2);


        verticalLayout_3->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 778, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", nullptr));
        Button_Open->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\346\234\215\345\212\241\345\231\250", nullptr));
        Button_ClearRecord->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\350\256\260\345\275\225", nullptr));
        Button_ClearContent->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\346\226\207\344\273\266\345\206\205\345\256\271", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\351\200\232\344\277\241\350\256\260\345\275\225", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        Button_SendData->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
