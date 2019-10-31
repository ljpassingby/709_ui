#include "mainwindow.h"
#include "equipmentmanagewindow.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    //解决中文乱码加这四行
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");//情况2
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);

    QApplication a(argc, argv);
    MainWindow w;
//    w.show();
    EquipmentManageWindow emw;
    emw.show();

    return a.exec();
}
