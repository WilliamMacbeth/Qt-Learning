#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "startbtn.h"
#include <QTimer>
#include "selectwindow.h"
#include <QLabel>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //链接菜单栏的退出按钮
    connect(ui->actionexit, &QAction::triggered, this, &QWidget::close);

    //主窗口设置
    this->setWindowTitle("翻金币小游戏");
    this->setFixedSize(390, 570);
    QPixmap menuscenebg(":/res/Coin0001.png");
    this->setWindowIcon(QIcon(menuscenebg));

    //开始按钮设置
    startbtn* start = new startbtn(":/res/MenuSceneStartButton.png");
    start->setParent(this);
    start->move(this->width()*0.5 - start->width()*0.5, this->height()*0.7);


    //创建选关界面
    selectwindow* select = new selectwindow;

    //按键特效
    connect(start, &QPushButton::clicked, this, [=](){
        start->zoom1();
        start->zoom2();
        QTimer::singleShot(500, this, [=](){
            this->hide();
            select->show();
        });
    });

    //返回按钮
    startbtn* back = new startbtn(":/res/BackButton.png", ":/res/BackButtonSelected.png");
    back->setParent(select);
    back->move(this->width()-back->width(),this->height()-back->height());
    connect(back, &QPushButton::clicked, this, [=](){
        back->zoom1();back->zoom2();
        QTimer::singleShot(500, this, [=](){
            this->show();
            select->hide();
        });
    });

    //关卡按钮设置
    QFont font;
    font.setFamily("黑体");
    font.setPointSize(13);
    for(int i = 0; i<5; i++)
        for(int j =0; j<5; j++)
        {
            startbtn* level = new startbtn(":/res/LevelIcon.png");
            level->setParent(select);
            level->move(25+j*70, 160+i*70);

            //监听按键返回信息
            connect(level, &QPushButton::clicked, this, [i,j](){
                qDebug()<<QString::number(i*5+j+1);
            });

            QLabel* label = new QLabel(select);
            label->setFont(font);
            label->setText(QString::number(i*5+j+1));
            label->setFixedSize(back->width(), back->height());
            label->move(15+j*70, 150+i*70);
            label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            label->setAttribute(Qt::WA_TransparentForMouseEvents);
        }

}
void MainWindow::paintEvent(QPaintEvent *event)
{
    //主窗口绘图
    QPainter painter(this);
    QPixmap menubg;
    menubg.load(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0, 0, this->width(), this->height(), menubg);

    menubg.load(":/res/Title.png");
    menubg = menubg.scaled(menubg.width()*0.5, menubg.height()*0.5);
    painter.drawPixmap(10, 30, menubg);


}
MainWindow::~MainWindow()
{
    delete ui;
}

