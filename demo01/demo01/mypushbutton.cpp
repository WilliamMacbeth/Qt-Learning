#include "mypushbutton.h"
#include <QDebug>
mypushbutton::mypushbutton(QWidget *parent)
    : QPushButton(parent)
{
    qDebug() << "mypushbutton调用";
}

mypushbutton::~mypushbutton()
{
    qDebug() << "mypushbutton析构";
}
