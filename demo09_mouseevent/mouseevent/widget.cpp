#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //启动定时器
    id1 = startTimer(1000);//单位：毫秒
    id2 = startTimer(2000);

    //定时器第二种方式
    QTimer* t = new QTimer(this);
    //启动定时器
    t->start(500);
    connect(t, &QTimer::timeout, this, [=]{
        static int number3 = 1;
        //label2每隔1秒加一
        ui->label_4->setText(QString::number(number3++));
    });

    //点击按钮暂停
    connect(ui->pushButton, &QPushButton::clicked, [=]{
        t->stop();
    });
    //点击按钮恢复
    connect(ui->pushButton_2, &QPushButton::clicked, [=]{
        t->start(500);
    });
}
void Widget::timerEvent(QTimerEvent *e)
{
    if(e->timerId() == id1){
        static int number = 1;
        //label2每隔1秒加一
        ui->label_2->setText(QString::number(number++));
    }

    if(e->timerId() == id2){
        static int number2 = 1;
        //label3每隔2秒加一
        ui->label_3->setText(QString::number(number2++));
    }

}
Widget::~Widget()
{
    delete ui;
}

