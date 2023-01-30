#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置男默认选中
    ui->radioButton->setChecked(true);

    //选中女，打印信息
    connect(ui->radioButton_2, &QRadioButton::clicked, [](){
        qDebug() << "选中了女性";
    });

    //多选 2:选中  0：未选中     1：半选中（需打开tristate）
    connect(ui->checkBox, &QCheckBox::stateChanged, [](int state){
      qDebug() << state;
    });

    //ListWidget
    //利用ListWidget写诗，添加一行内容
//    QListWidgetItem* item = new QListWidgetItem("锄禾日当午");
//    ui->listWidget->addItem(item);
//    item->setTextAlignment(Qt::AlignHCenter);//水平居中

    //QStringList   QList<QString>
    //一次添加多行内容
    QStringList list;
    list << "锄禾日当午" << "汗滴禾下土" << "谁知盘中餐" << "粒粒皆辛苦";
    ui->listWidget->addItems(list);


    //TreeWidget
    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList() << "英雄" << "英雄介绍");

    //设置顶层节点
    QTreeWidgetItem* li = new QTreeWidgetItem(ui->treeWidget, QStringList() << "力量型");
    QTreeWidgetItem* min = new QTreeWidgetItem(ui->treeWidget, QStringList() << "敏捷型");
    QTreeWidgetItem* zhi = new QTreeWidgetItem(QStringList() << "智力型");
    ui->treeWidget->addTopLevelItem(zhi);

    //设置子节点
    QStringList heroL1,heroL2,heroM1,heroM2,heroZ1,heroZ2;

    heroL1 << "刚被猪" << "前排坦克，能在吸收伤害的同时造成可观的范围输出";
    heroL2 << "船长" << "前排坦克，能肉能输出能控场的全能英雄";

    heroM1 << "月骑" << "中排物理输出，可以使用分裂利刃攻击多个目标";
    heroM2 << "小鱼人" << "前排战士，擅长偷取敌人的属性来增强自身战力";

    heroZ1 << "死灵法师" << "前排法师坦克，魔法抗性较高，拥有治疗技能";
    heroZ2 << "巫医" << "后排辅助法师，可以使用奇特的巫术诅咒敌人与治疗队友";

    QTreeWidgetItem* l1 = new QTreeWidgetItem(heroL1);
    QTreeWidgetItem* l2 = new QTreeWidgetItem(heroL2);
    QTreeWidgetItem* m1 = new QTreeWidgetItem(heroM1);
    QTreeWidgetItem* m2 = new QTreeWidgetItem(heroM2);
    QTreeWidgetItem* z1 = new QTreeWidgetItem(heroZ1);
    QTreeWidgetItem* z2 = new QTreeWidgetItem(heroZ2);

    li->addChild(l1);
    li->addChild(l2);
    min->addChild(m1);
    min->addChild(m2);
    zhi->addChild(z1);
    zhi->addChild(z2);


    //TableWidget
    //设置列数和文字
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "英雄" << "职业" << "年龄");
    //设置行数
    ui->tableWidget->setRowCount(4);
    //设置正文
//    ui->tableWidget->setItem(0, 0, new QTableWidgetItem("亚瑟"));
    QStringList hero;
    hero << "亚瑟" << "妲己" << "扁鹊" << "铠";
    QList<QString> zhiye;
    zhiye << "战士" << "法师" << "法师" << "打野";
    for(int i = 0; i < 4; i++){
        int col = 0;
        ui->tableWidget->setItem(i, col++, new QTableWidgetItem(hero[i]));
        ui->tableWidget->setItem(i, col++, new QTableWidgetItem(zhiye[i]));
        //int 转 QString
        ui->tableWidget->setItem(i, col++, new QTableWidgetItem(QString::number(18 + i)));
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

