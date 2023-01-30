#include "widget.h"
#include "widget2.h"
#include <QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //生成两个按钮，按“open”打开一个窗口，按“close”关闭打开的窗口
    QPushButton* btn1 = new QPushButton("open", this);
    QPushButton* btn2 = new QPushButton("close", this);
    widget2* w2 = new widget2;
    setWindowTitle("1");
    setFixedSize(600, 400);
    btn1->move(200, 100);
    btn1->resize(100, 50);
    btn2->move(200, 200);
    btn2->resize(100, 50);
    w2->setWindowTitle("2");
    w2->setFixedSize(600, 400);
    connect(btn1, &QPushButton::clicked, w2, &QWidget::show);
    connect(btn2, &QPushButton::clicked, w2, &QWidget::close);
}

Widget::~Widget()
{
}

