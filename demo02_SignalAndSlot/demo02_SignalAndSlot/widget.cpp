#include "widget.h"
#include <QPushButton>


//teacher类
//student类
//下课后，老师触发一个信号：饿了，学生接收信号请老师吃饭


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->tea = new teacher;
    this->stu = new student;


//    //链接hungy()与treat()
//    connect(tea, &teacher::hungry, stu, &student::treat);

//    //发射信号
//    //注意顺序不能反了，要先链接信号与槽才能发射信号
//    //即发射信号的函数不能在connect()语句之前
//    Widget::classisover();


    //链接带参数的信号与槽
    //信号与槽函数均有重载，用函数指针解决冲突
    //函数指针->函数地址
    //函数指针形式：函数返回值类型（*指针名）（函数形参列表）
//    void(teacher::*teachersignal)(QString) = &teacher::hungry;
//    void(student::*studentslot)(QString) = &student::treat;
//    connect(tea, teachersignal, stu, studentslot);
//    classisover();


    //点击一个按钮，触发下课
    QPushButton * btn = new QPushButton("下课", this);
    btn->move(200, 200);
    btn->resize(50, 50);
    setFixedSize(400, 400);

    //点击按钮，触发信号
//    connect(btn, &QPushButton::clicked, this, &Widget::classisover);



    void(teacher::*teachersignal2)(void) = &teacher::hungry;
    void(student::*studentslot2)(void) = &student::treat;
//    connect(tea, teachersignal2, stu, studentslot2);
    //信号链接信号
    connect(btn, &QPushButton::clicked, tea, teachersignal2);


    //断开信号
//    disconnect(btn, &QPushButton::clicked, tea, teachersignal2);

    //拓展
    //信号可以链接信号
    //一个信号可以连接多个槽函数
    //多个信号可以连接同一个槽函数
    //信号/槽函数接收的参数与信号需要一一对应，但是信号的参数个数可以多于槽函数，多余的参数槽函数不会接收
    //在信号链接信号的例子中，clicked()的参数为一个bool型，teachersignal指向的信号参数为0个
    //clicked()的参数（1个）>teachersignal指向的信号参数（0个），所以代码正确
    //但是如果clicked()链接teachersignal指向的信号，clicked()的参数为一个bool型，teachersignal指向的信号参数为1个QString型
    //clicked()的参数（1个bool型）与teachersignal指向的信号参数（1个QString型）不匹配，所以代码错误


    //Qt4版本信号与槽的链接,无参版本（需要把槽函数放在public slots下才有效）
    connect(tea, SIGNAL(hungry()), stu, SLOT(treat()));
    //Qt4版本信号与槽的链接,有参版本
    connect(tea, SIGNAL(hungry(QString)), stu, SLOT(treat(QString)));
    classisover();
    //优点：直观简单
    //缺点：没有类型检查，当槽函数参数多于信号时链接不成功，但是编译能通过
}

//emit是不同窗口/类间的触发信号
//当对象改变其状态时，信号就由该对象发射 (emit) 出去，通过槽函数实现用户想要的效果
//在Qt中emit是个空宏，即#define emit
//不加emit其实也没关系，emit仅作注释作用，告诉编程人员这是个触发信号
void Widget::classisover()
{
    //emit tea->hungry();
    emit tea->hungry("宫保鸡丁");
}

Widget::~Widget()
{
}

