#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "teacher.h"
#include "student.h"
class Widget : public QWidget
{
    Q_OBJECT

    teacher *tea;
    student *stu;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void classisover();
};
#endif // WIDGET_H
