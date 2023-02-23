#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QHostAddress>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("TCP-客户端");
    tcp = new QTcpSocket(this);
    status = new QLabel(ui->statusbar);
    ui->Button_Disconnect->setDisabled(true);

    ui->lineEdit_Port->setText("8899");
    ui->lineEdit_Loca->setText("192.168.1.102");

    //读取服务器数据
    connect(tcp, &QTcpSocket::readyRead, this, [=]{
        QByteArray data = tcp->readAll();
        ui->textEdit_Record->append("服务器说：" + data);
    });

    //断开连接时清除Socket
    connect(tcp, &QTcpSocket::disconnected, this, [=]{
        ui->textEdit_Record->append("客户端与服务器断开了连接...");
        tcp->close();
//        tcp->deleteLater();
        status->setText("连接断开");
        ui->Button_Connect->setEnabled(true);
        ui->Button_Disconnect->setDisabled(true);
    });

    connect(tcp, &QTcpSocket::connected, this, [=]{
        ui->textEdit_Record->append("客户端与服务器建立了连接...");
        status->setText("连接成功");
        ui->Button_Connect->setDisabled(true);
        ui->Button_Disconnect->setEnabled(true);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Button_Connect_clicked()
{
    QString ip = ui->lineEdit_Loca->text();
    unsigned short port = ui->lineEdit_Port->text().toUShort();
    tcp->connectToHost(QHostAddress(ip), port);
}


void MainWindow::on_Button_Disconnect_clicked()
{
    tcp->disconnectFromHost();
}


void MainWindow::on_Button_SendData_clicked()
{
    QByteArray msg = ui->textEdit_SendData->toPlainText().toUtf8();
    tcp->write(msg);
    ui->textEdit_Record->append("客户端说：" + msg);
}

