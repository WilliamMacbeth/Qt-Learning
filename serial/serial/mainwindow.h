#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void serialSet();
    void serialPortReadyRead();
    void serialRefresh();
private:
    Ui::MainWindow *ui;
    QSerialPort serial;
    QList<QString> serialNumber;
    QSerialPort::BaudRate baudRate; //定义串口中一些参数的枚举变量
    QSerialPort::DataBits dataBits;
    QSerialPort::StopBits stopBits;
    QSerialPort::Parity checkBits;
//    QSerialPort serial;
};
#endif // MAINWINDOW_H
