#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button_Connect_clicked();

    void on_Button_Disconnect_clicked();

    void on_Button_SendData_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket* tcp;
    QLabel* status;
};
#endif // MAINWINDOW_H
