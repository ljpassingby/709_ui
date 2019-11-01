#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->loadStyleSheet(":/qss/Resource/qss/QPushButton.qss");
//    ui->button_zhihui->setStyleSheet("QPushButton:hover{background-color:red;}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadStyleSheet(const QString &styleSheetFile)

{

    QFile file(styleSheetFile);

    if (file.open(QFile::ReadOnly))

    {

        this->setStyleSheet(file.readAll());
//        QString styleSheet = this->styleSheet();

//        styleSheet += QLatin1String(file.readAll());//读取样式表文件

//        this->setStyleSheet(styleSheet);//把文件内容传参

        file.close();

    }

    else

    {

        QMessageBox::information(this,"tip","cannot find qss file");

    }

}
