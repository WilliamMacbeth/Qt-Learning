#include "student.h"
#include <QDebug>
student::student(QObject *parent)
    : QObject{parent}
{

}

void student::treat()
{
    qDebug() << "请老师吃饭";
}

void student::treat(QString foodname)
{
    //QString->char * ，去除引号：先转成QByteArray(调用toUtf8())
    //再转成char *
    qDebug() << "请老师吃" << foodname.toUtf8().data();
}
