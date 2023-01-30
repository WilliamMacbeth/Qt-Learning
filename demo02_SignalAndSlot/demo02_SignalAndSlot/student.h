#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class student : public QObject
{
    Q_OBJECT
public:
    explicit student(QObject *parent = nullptr);

    //早期版本（5.6以前），槽函数必须写在public slots下，高级版本可以写在public下
    //也可以写在全局下
    //返回值是void，需要声明，也需要实现
    //可以有参数，可以重载


signals:

public slots:
    void treat();
    void treat(QString foodname);
};

#endif // STUDENT_H
