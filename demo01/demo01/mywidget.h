#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class mywidget : public QWidget
{
    Q_OBJECT  //宏，允许类中使用信号与槽的机制

public:
    mywidget(QWidget *parent = nullptr);//构造函数
    ~mywidget();//析构函数
};
#endif // MYWIDGET_H
