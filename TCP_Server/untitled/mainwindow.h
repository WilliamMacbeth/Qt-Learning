#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QLabel>
#include <QFile>

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
    void TCP_Read();
private slots:
    void on_Button_Open_clicked();

    void on_Button_SendData_clicked();

    void on_Button_ClearRecord_clicked();

    void on_Button_ClearContent_clicked();

private:
    Ui::MainWindow *ui;
    QTcpServer* server;
    QTcpSocket* tcp;
    QLabel* status;
    QFile* file;
};
#endif // MAINWINDOW_H
