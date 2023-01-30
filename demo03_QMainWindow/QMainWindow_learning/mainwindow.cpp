#include "mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(600, 400);

    //菜单栏
    //创建一个菜单栏，最多只能有一个
    QMenuBar* menu = menuBar();
    //将菜单栏放到窗口中
    setMenuBar(menu);
    //创建菜单
    QMenu* menufile = menu->addMenu("文件");
    QMenu* menuedit = menu->addMenu("编辑");
    //创建菜单项
    menufile->addAction("新建");
    QAction* actionchoose = menuedit->addAction("选项");
    //添加分割线
    menufile->addSeparator();
    menufile->addAction("打开");



    //工具栏，可以有多个
    QToolBar* tool = new QToolBar;
    //将工具栏放到窗口（默认放在上方）
    //addToolBar(tool);
    addToolBar(Qt::LeftToolBarArea, tool);

    //设置只允许左右停靠
    tool->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
    //设置不浮动
    tool->setFloatable(false);
    //设置不移动，浮动开关消失（总开关）
    tool->setMovable(false);
    //在工具栏中设置内容
    tool->addAction("新建");
    tool->addAction(actionchoose);
    //设置分割线
    tool->addSeparator();
    //在工具栏中添加控件
    //addWidget添加控件
    QPushButton* btn = new QPushButton("调试", this);
    tool->addWidget(btn);



    //状态栏，只能有一个
    //QStatusBar* status = statusBar();
    QStatusBar* status = new QStatusBar(this);
    setStatusBar(status);
    //放标签控件
    QLabel* label1 = new QLabel("输出", this);
    status->addWidget(label1);
    //将标签放在右边
    QLabel* label2 = new QLabel("右边输出", this);
    status->addPermanentWidget(label2);



    //铆接部件（浮动窗口），可以有多个
    QDockWidget* dock = new QDockWidget("1", this);
    addDockWidget(Qt::BottomDockWidgetArea, dock);
    //设置上下停靠
    dock->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);


    //中心部件，只能有一个
    QTextEdit* edit = new QTextEdit(this);
    setCentralWidget(edit);

}

MainWindow::~MainWindow()
{
}

