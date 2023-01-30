#include "smallwidget.h"
#include "ui_smallwidget.h"
#include <QDebug>
smallwidget::smallwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::smallwidget)
{
    ui->setupUi(this);
    //QSpinBox移动 QSilder跟着移动
    connect(ui->spinBox, QOverload<int>::of(&QSpinBox::valueChanged), ui->horizontalSlider, &QSlider::setValue);
    //QSilder移动 QSpinBox跟着移动
    connect(ui->horizontalSlider, &QSlider::valueChanged, ui->spinBox, &QSpinBox::setValue);
}
void smallwidget::getnum()
{
    qDebug() << ui->spinBox->value();
}
void smallwidget::setnum()
{
    ui->spinBox->setValue(50);
}
smallwidget::~smallwidget()
{
    delete ui;
}
