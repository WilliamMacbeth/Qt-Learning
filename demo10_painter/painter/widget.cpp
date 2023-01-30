#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, [=]{
        posx += 20;
       update();
    });
}
void Widget::paintEvent(QPaintEvent* )
{
    //实例化画家对象，参数为绘图设备
    QPainter painter(this);

    //设置画笔
//    QPen pen(QColor(0, 0, 255));
//    pen.setWidth(3);
//    pen.setStyle(Qt::DashDotLine);
//    painter.setPen(pen);

    //设置画刷
//    QBrush brush(QColor(0, 255, 0));
//    brush.setStyle(Qt::Dense7Pattern);
//    painter.setBrush(brush);

//    painter.drawLine(QPoint(0, 0), QPoint(100, 100));
//    painter.drawEllipse(QPoint(100, 100), 50, 50);
//    painter.drawRect(QRect(20, 20, 50, 50));
//    painter.drawText(QRect(200, 100, 150, 50), "好好学习，天天向上");


    //高级设置
//    painter.drawEllipse(QPoint(300, 100), 50, 50);
//    //设置抗锯齿能力 效率低
//    painter.setRenderHint(QPainter::Antialiasing);
//    painter.drawEllipse(QPoint(400, 100), 50, 50);

//    //画矩形
//    painter.drawRect(QRect(20, 20, 50, 50));
//    //移动画家
//    painter.translate(100, 0);
//    painter.drawRect(QRect(20, 20, 50, 50));
//    painter.drawRect(QRect(20, 20, 100, 100));

//    //保存画家状态
//    painter.save();
//    //还原画家状态
//    painter.restore();

    //利用画家画资源图片
    if(posx >= this->width() - 100){
        posx = 0;
    }
    painter.drawPixmap(posx, 0, QPixmap(":/image/Image/butterfly.png"));

}
Widget::~Widget()
{
    delete ui;
}

