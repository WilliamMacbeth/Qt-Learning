#include "mywidget.h"
#include "mypushbutton.h"
#include <QDebug>
#include <QPushButton>
mywidget::mywidget(QWidget *parent)
    : QWidget(parent)  //委托构造，调用Qwidget的构造函数进行构造
{
    //创建一个按钮

    //方法一
    QPushButton * btn1 = new QPushButton;
    //让按钮依赖在mywidget窗口对象上
    btn1->setParent(this);
    //显示按钮文字
    btn1->setText("1");

    //方法二
    QPushButton * btn2 = new QPushButton("2", this);
    //移动按钮
    btn2->move(100, 100);
    //重置按钮大小
    btn2->resize(50, 50);

    //重置窗口大小
    resize(600, 400);

    //设置固定窗口大小
    setFixedSize(600, 400);

    //设置窗口标题
    setWindowTitle("demo01");




    //创建一个mypushbutton对象
    mypushbutton * mybtn = new mypushbutton;
    mybtn->setText("3");
    mybtn->move(200, 0);
    mybtn->resize(50, 50);
    mybtn->setParent(this);


    //需求：按下按钮，窗口关闭
    //参数一：信号的发送者 参数二：信号（函数地址） 参数三：信号的接收者 参数四：处理信号（槽函数）
    //connect(mybtn, &mypushbutton::clicked, this, &mywidget::close);
    connect(mybtn, &QPushButton::clicked, this, &QWidget::close);

}
mywidget::~mywidget()
{
    qDebug() << "mywidget析构";
}

