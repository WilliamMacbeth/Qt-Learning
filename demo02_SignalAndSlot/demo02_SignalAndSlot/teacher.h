#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class teacher : public QObject
{
    Q_OBJECT
public:
    explicit teacher(QObject *parent = nullptr);


signals:
    //自定义信号卸载signals下
    //返回值是void，只需要声明，不需要实现
    //可以有参数，可以重载
    void hungry();
    void hungry(QString foodname);

};

#endif // TEACHER_H
