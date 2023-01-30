#include "mywidget.h"

#include <QApplication>//包含一个应用程序类的头文件

int main(int argc, char *argv[])
{
    //a:应用程序对象，在Qt文件中，有且仅有一个
    QApplication a(argc, argv);

    //w:窗口对象，mywidget父类->QWidget
    mywidget w;

    //窗口对象默认不会显示，必须要调用show方法
    w.show();

    //让应用程序对象进入消息循环，类似于C++的system("pause")
    //让代码暂停在这行，窗口不会一闪而过
    return a.exec();
}
