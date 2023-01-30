#include "widget2.h"
#include <QPushButton>
widget2::widget2(QWidget *parent)
    : QWidget{parent}
{
    QPushButton* btn3 = new QPushButton("close", this);
    btn3->resize(100, 50);
    btn3->move(200, 200);
    setFixedSize(600, 400);

    connect(btn3, &QPushButton::clicked, this, &QWidget::close);
}
