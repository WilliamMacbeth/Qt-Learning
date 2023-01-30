#include "mylabel.h"
#include <QDebug>
#include <QMouseEvent>
mylabel::mylabel(QWidget *parent)
    : QLabel{parent}
{
    setMouseTracking(true);
}
void mylabel::mouseMoveEvent(QMouseEvent *event)
{
//    if(event->buttons() & Qt::LeftButton){
      qDebug() << "鼠标移动了";
//    }
}
void mylabel::enterEvent(QEvent *event)
{
//    qDebug() << "鼠标进入了";
}
void mylabel::leaveEvent(QEvent *event)
{
//    qDebug() << "鼠标离开了";
}
void mylabel::mousePressEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::LeftButton){
        QString str = QString("鼠标按下，x=%1, y=%2").arg(ev->x()).arg(ev->y());
        qDebug() << str;
    }

}
void mylabel::mouseReleaseEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::LeftButton){
        qDebug() << "鼠标释放";
    }
}
