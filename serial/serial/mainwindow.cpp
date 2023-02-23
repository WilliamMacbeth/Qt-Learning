#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        serialNumber << info.portName();
    }
    ui->Box_serialNum->addItems(serialNumber);
    ui->Box_Baud->setCurrentIndex(6);
    ui->Box_Data->setCurrentIndex(3);
    ui->Box_StopBit->setCurrentIndex(0);
    ui->Box_Parity->setCurrentIndex(0);
    connect(ui->Button_Open, &QPushButton::clicked, this, &MainWindow::serialSet);
    connect(&serial, &QSerialPort::readyRead, this, &MainWindow::serialPortReadyRead);
    connect(ui->Button_Refresh, &QPushButton::clicked, this,&MainWindow::serialRefresh);

}
void MainWindow::serialSet()
{
    if(ui->Box_serialNum->currentIndex() == -1)
        ui->label_SerialInfo->setText("当前无可用串口");
    else
    {
        switch (ui->Box_Baud->currentIndex())
        {
            case 0:
                baudRate = QSerialPort::Baud2400; break;
            case 1:
                baudRate = QSerialPort::Baud4800; break;
            case 2:
                baudRate = QSerialPort::Baud9600; break;
            case 3:
                baudRate = QSerialPort::Baud19200; break;
            case 4:
                baudRate = QSerialPort::Baud38400; break;
            case 5:
                baudRate = QSerialPort::Baud57600; break;
            case 6:
                baudRate = QSerialPort::Baud115200; break;
        }
        //读取选择的数据位
        switch (ui->Box_Data->currentIndex())
        {
            case 0:
                dataBits = QSerialPort::Data5; break;
            case 1:
                dataBits = QSerialPort::Data6; break;
            case 2:
                dataBits = QSerialPort::Data7; break;
            case 3:
                dataBits = QSerialPort::Data8; break;
        }
        //读取选择的停止位
        switch (ui->Box_StopBit->currentIndex())
        {
            case 0:
                stopBits = QSerialPort::OneStop; break;
            case 1:
                stopBits = QSerialPort::TwoStop; break;
        }
        //读取选择的校验位
        switch (ui->Box_Parity->currentIndex())
        {
            case 0:
                checkBits = QSerialPort::NoParity; break;
            case 1:
                checkBits = QSerialPort::OddParity; break;
            case 2:
                checkBits = QSerialPort::EvenParity; break;
        }
        //对定义的串口对象属性赋值
        serial.setPortName(ui->Box_serialNum->currentText());
        serial.setBaudRate(baudRate);
        serial.setDataBits(dataBits);
        serial.setStopBits(stopBits);
        serial.setParity(checkBits);
        serial.open(QSerialPort::ReadWrite);
        if(serial.isOpen())
            ui->label_SerialInfo->setText("串口打开成功");
        else ui->label_SerialInfo->setText("串口打开失败");
    }
}

void MainWindow::serialPortReadyRead()
{
    QByteArray bu;
    bu = serial.readAll();
    ui->plainTextEdit->appendPlainText(bu.toHex().data());
    qDebug() << bu;

}
void MainWindow::serialRefresh()
{
    ui->Box_serialNum->clear();
    serialNumber.clear();
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        serialNumber << info.portName();
    }
    if(!serialNumber.isEmpty())
        ui->label_SerialInfo->setText("检测到串口");
    else ui->label_SerialInfo->setText("当前无可用串口");
    ui->Box_serialNum->addItems(serialNumber);
}

MainWindow::~MainWindow()
{
    delete ui;
}

