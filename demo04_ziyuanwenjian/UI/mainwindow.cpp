#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //使用Qt资源 ": + 前缀名 + 文件名"
    ui->actionnewfile->setIcon(QIcon(":/Image/butterfly.png"));
    ui->actionopen->setIcon(QIcon(":/Image/butterfly1.png"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

