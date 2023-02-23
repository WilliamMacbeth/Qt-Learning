#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QTcpSocket>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("TCP-服务器");

    file = new QFile("C:\\Users\\Administrator\\Desktop\\VLPR\\1.txt");
    file->setParent(this);

//    file->open(QFile::ReadWrite | QFile::Truncate);
//    file->close();

    //创建监听对象
    server = new QTcpServer(this);

    status = new QLabel(ui->statusbar);

    ui->lineEdit_Duankou->setText("8080");

    connect(server, &QTcpServer::newConnection, this, [=]{
        tcp = server->nextPendingConnection();
        tcp->setParent(this);
        status->setText("连接成功");
        ui->textEdit_Record->append("服务器与客户端建立了连接...");

        //读取客户端数据
        connect(tcp, &QTcpSocket::readyRead, this, &MainWindow::TCP_Read);

        //断开连接
        connect(tcp, &QTcpSocket::disconnected, this, [=]{
            tcp->close();
//            tcp->deleteLater();
            status->setText("连接断开");
            ui->textEdit_Record->append("客户端与服务器断开了连接...");
        });

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TCP_Read()
{
    QByteArray data = tcp->readAll();
    ui->textEdit_Record->append(data.toHex(' ').data());
    file->open(QFile::Append);
    file->write(data.toHex(' ').data());
    file->write(" ");
    file->close();
}

void MainWindow::on_Button_Open_clicked()
{
    unsigned short DuanKou = ui->lineEdit_Duankou->text().toUShort();
    server->listen(QHostAddress::Any, DuanKou);
    ui->Button_Open->setDisabled(true);
}


void MainWindow::on_Button_SendData_clicked()
{
    QByteArray msg = ui->textEdit_SendData->toPlainText().toUtf8();
    tcp->write(msg);
    ui->textEdit_Record->append("服务器说：" + msg);
}


void MainWindow::on_Button_ClearRecord_clicked()
{
    ui->textEdit_Record->clear();
}


void MainWindow::on_Button_ClearContent_clicked()
{
    file->open(QFile::ReadWrite | QFile::Truncate);
    file->close();
}

