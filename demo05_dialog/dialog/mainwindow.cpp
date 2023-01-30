#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //点击新建按钮，弹出一个对话框
    connect(ui->actionnew, &QAction::triggered, [=](){
        //对话框分类
        //模态对话框：不可以对其他窗口操作，调用exec()阻塞
        //非模态对话框：可以对其他窗口操作，调用show()

        //模态对话框
//        QDialog dlg(this);
//        dlg.setWindowTitle("1");
//        dlg.resize(200, 100);
//        dlg.exec();

//        qDebug() << "模态对话框弹出了";

        //非模态对话框
//        QDialog* dlg2 = new QDialog(this);
//        dlg2->resize(200, 100);
//        dlg2->show();
//        //设置关闭对话框时释放相应内存
//        dlg2->setAttribute(Qt::WA_DeleteOnClose);
//        qDebug() << "非模态对话框弹出了";

        //消息对话框
        //错误对话框
//        QMessageBox::critical(this, "critical", "错误");
        //信息对话框
//        QMessageBox::information(this, "info", "信息");
        //提问对话框
        //参数一：父亲  参数二：对话框标题  参数三：对话框内容
        //参数四：按键类型  参数五：默认关联回车按钮
//        QMessageBox::question(this, "ques", "问题", QMessageBox::Save | QMessageBox::Cancel, QMessageBox::Cancel);
        //利用返回值判断用户的输入
//        if(QMessageBox::Save == QMessageBox::question(this, "ques", "问题", QMessageBox::Save | QMessageBox::Cancel, QMessageBox::Cancel)){
//            qDebug() << "点击了save按钮";
//        }
//        else qDebug() << "点击了cancel按钮";
        //警告对话框
//        QMessageBox::warning(this, "warn", "警告");

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

