#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QTextCodec>
#include <QFileInfo>
#include <QDebug>
#include <QDateTime>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, [=](){

        //读取文件
        QString path = QFileDialog::getOpenFileName(this, "打开文件", "C:\\Users\\Administrator\\Desktop");
        ui->lineEdit->setText(path);

        //编码格式类
//        QTextCodec* code = QTextCodec::codecForName("gbk");


        //显示文件内容
        //QFile默认的格式为utf-8
        QFile file(path);
        //设置打开方式
        file.open(QIODevice::ReadOnly);
        QByteArray array =  file.readAll();
        ui->textEdit->setText(array);
//        ui->textEdit->setText(code->toUnicode(array));
        file.close();

//        //写入文件（不会立刻显示，关闭程序后可以看到）
//        file.open(QIODevice::Append);
//        file.write("啊啊啊");
//        file.close();


        //QFileInfo：文件信息类
        QFileInfo info(path);
        qDebug() << "大小为"<<info.size()<<",路径为"<<info.path()<<",后缀名为"<<info.suffix()<<",文件名称为"<<info.fileName();
        //打印时间
        qDebug()<<"创建时间为"<<info.birthTime().toString("yyyy/MM/dd hh:mm:ss");
        qDebug()<<"最后修改时间为"<<info.lastModified().toString("yyyy/MM/dd hh:mm:ss");
    });
}

Widget::~Widget()
{
    delete ui;
}

