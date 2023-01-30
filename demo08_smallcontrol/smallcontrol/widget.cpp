#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, [=]{
        ui->sliderwidget->setnum();
    });
    connect(ui->pushButton_2, &QPushButton::clicked, [=]{
        ui->sliderwidget->getnum();
    });
}

Widget::~Widget()
{
    delete ui;
}

