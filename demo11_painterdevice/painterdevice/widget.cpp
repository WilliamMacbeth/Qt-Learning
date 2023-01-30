#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QPainter>
#include <QImage>
#include <QPicture>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//    //QPixmap:专门为显示平台做了优化，不同平台显示可能不一样
//    QPixmap pix(300, 300);

//    //填充颜色
//    pix.fill(Qt::white);

//    QPainter painter(&pix);
//    painter.setPen(QPen(Qt::blue));
//    painter.drawEllipse(QPoint(150, 150), 100, 100);
//    pix.save("E:\\pix.png");

//    //QImage:可以对像素进行访问
//    QImage img(300, 300, QImage::Format_RGB16);
//    img.fill(Qt::white);
//    QPainter painter(&img);
//    painter.setPen(QPen(Qt::blue));
//    painter.drawEllipse(QPoint(150, 150), 100, 100);
//    img.save("E:\\img.png");


    //QPicture:记录和重现绘图操作
    QPicture pic;
    QPainter painter;
    painter.begin(&pic);//开始画画

    painter.setPen(Qt::blue);
    painter.drawEllipse(QPoint(150, 150), 100, 100);

    painter.end();//结束画画

    //保存
    pic.save("E:\\pic.zt");
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
//    //利用QImage对像素进行修改
//    QImage img(":/Image/butterfly.png");
//    for(int i = 50;i<100;i++){
//        for(int j = 50; j<100; j++){
//            img.setPixel(i, j, qRgb(255, 0, 0));
//        }
//    }
//    painter.drawImage(0, 0, img);

    //重现绘图指令
    QPicture pic;
    pic.load("E:\\pic.zt");
    painter.drawPicture(0, 0, pic);

}

Widget::~Widget()
{
    delete ui;
}

