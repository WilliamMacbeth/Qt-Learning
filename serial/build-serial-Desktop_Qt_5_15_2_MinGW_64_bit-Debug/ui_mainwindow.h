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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_SerialNum;
    QComboBox *Box_serialNum;
    QLabel *label_Baud;
    QComboBox *Box_Baud;
    QLabel *label_Data;
    QComboBox *Box_Data;
    QLabel *label_StopBit;
    QComboBox *Box_StopBit;
    QLabel *label_Parity;
    QComboBox *Box_Parity;
    QLabel *label_Open;
    QPushButton *Button_Open;
    QPushButton *Button_Close;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_SerialInfo;
    QPushButton *Button_Refresh;
    QMenuBar *MenuBar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(715, 473);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 40, 169, 273));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_SerialNum = new QLabel(groupBox);
        label_SerialNum->setObjectName(QString::fromUtf8("label_SerialNum"));

        gridLayout->addWidget(label_SerialNum, 0, 0, 1, 1);

        Box_serialNum = new QComboBox(groupBox);
        Box_serialNum->setObjectName(QString::fromUtf8("Box_serialNum"));

        gridLayout->addWidget(Box_serialNum, 0, 1, 1, 1);

        label_Baud = new QLabel(groupBox);
        label_Baud->setObjectName(QString::fromUtf8("label_Baud"));

        gridLayout->addWidget(label_Baud, 1, 0, 1, 1);

        Box_Baud = new QComboBox(groupBox);
        Box_Baud->addItem(QString());
        Box_Baud->addItem(QString());
        Box_Baud->addItem(QString());
        Box_Baud->addItem(QString());
        Box_Baud->addItem(QString());
        Box_Baud->addItem(QString());
        Box_Baud->addItem(QString());
        Box_Baud->setObjectName(QString::fromUtf8("Box_Baud"));

        gridLayout->addWidget(Box_Baud, 1, 1, 1, 1);

        label_Data = new QLabel(groupBox);
        label_Data->setObjectName(QString::fromUtf8("label_Data"));

        gridLayout->addWidget(label_Data, 2, 0, 1, 1);

        Box_Data = new QComboBox(groupBox);
        Box_Data->addItem(QString());
        Box_Data->addItem(QString());
        Box_Data->addItem(QString());
        Box_Data->addItem(QString());
        Box_Data->setObjectName(QString::fromUtf8("Box_Data"));

        gridLayout->addWidget(Box_Data, 2, 1, 1, 1);

        label_StopBit = new QLabel(groupBox);
        label_StopBit->setObjectName(QString::fromUtf8("label_StopBit"));

        gridLayout->addWidget(label_StopBit, 3, 0, 1, 1);

        Box_StopBit = new QComboBox(groupBox);
        Box_StopBit->addItem(QString());
        Box_StopBit->addItem(QString());
        Box_StopBit->setObjectName(QString::fromUtf8("Box_StopBit"));

        gridLayout->addWidget(Box_StopBit, 3, 1, 1, 1);

        label_Parity = new QLabel(groupBox);
        label_Parity->setObjectName(QString::fromUtf8("label_Parity"));

        gridLayout->addWidget(label_Parity, 4, 0, 1, 1);

        Box_Parity = new QComboBox(groupBox);
        Box_Parity->addItem(QString());
        Box_Parity->addItem(QString());
        Box_Parity->addItem(QString());
        Box_Parity->setObjectName(QString::fromUtf8("Box_Parity"));

        gridLayout->addWidget(Box_Parity, 4, 1, 1, 1);

        label_Open = new QLabel(groupBox);
        label_Open->setObjectName(QString::fromUtf8("label_Open"));

        gridLayout->addWidget(label_Open, 5, 0, 2, 1);

        Button_Open = new QPushButton(groupBox);
        Button_Open->setObjectName(QString::fromUtf8("Button_Open"));

        gridLayout->addWidget(Button_Open, 5, 1, 1, 1);

        Button_Close = new QPushButton(groupBox);
        Button_Close->setObjectName(QString::fromUtf8("Button_Close"));

        gridLayout->addWidget(Button_Close, 6, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(250, 50, 371, 261));
        plainTextEdit->setReadOnly(true);
        label_SerialInfo = new QLabel(centralwidget);
        label_SerialInfo->setObjectName(QString::fromUtf8("label_SerialInfo"));
        label_SerialInfo->setGeometry(QRect(40, 340, 171, 31));
        label_SerialInfo->setFrameShape(QFrame::Box);
        label_SerialInfo->setAlignment(Qt::AlignCenter);
        Button_Refresh = new QPushButton(centralwidget);
        Button_Refresh->setObjectName(QString::fromUtf8("Button_Refresh"));
        Button_Refresh->setGeometry(QRect(60, 10, 93, 29));
        MainWindow->setCentralWidget(centralwidget);
        MenuBar = new QMenuBar(MainWindow);
        MenuBar->setObjectName(QString::fromUtf8("MenuBar"));
        MenuBar->setGeometry(QRect(0, 0, 715, 26));
        MainWindow->setMenuBar(MenuBar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        label_SerialNum->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243", nullptr));
        label_Baud->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        Box_Baud->setItemText(0, QCoreApplication::translate("MainWindow", "2400", nullptr));
        Box_Baud->setItemText(1, QCoreApplication::translate("MainWindow", "4800", nullptr));
        Box_Baud->setItemText(2, QCoreApplication::translate("MainWindow", "9600", nullptr));
        Box_Baud->setItemText(3, QCoreApplication::translate("MainWindow", "19200", nullptr));
        Box_Baud->setItemText(4, QCoreApplication::translate("MainWindow", "38400", nullptr));
        Box_Baud->setItemText(5, QCoreApplication::translate("MainWindow", "57600", nullptr));
        Box_Baud->setItemText(6, QCoreApplication::translate("MainWindow", "115200", nullptr));

        label_Data->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        Box_Data->setItemText(0, QCoreApplication::translate("MainWindow", "5", nullptr));
        Box_Data->setItemText(1, QCoreApplication::translate("MainWindow", "6", nullptr));
        Box_Data->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));
        Box_Data->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));

        label_StopBit->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        Box_StopBit->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        Box_StopBit->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));

        label_Parity->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        Box_Parity->setItemText(0, QCoreApplication::translate("MainWindow", "\346\227\240", nullptr));
        Box_Parity->setItemText(1, QCoreApplication::translate("MainWindow", "\345\245\207", nullptr));
        Box_Parity->setItemText(2, QCoreApplication::translate("MainWindow", "\345\201\266", nullptr));

        label_Open->setText(QCoreApplication::translate("MainWindow", "\346\223\215\344\275\234", nullptr));
        Button_Open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        Button_Close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        label_SerialInfo->setText(QString());
        Button_Refresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\344\270\262\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
