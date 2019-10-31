#include "equipmentmanagewindow.h"
#include "ui_equipmentmanagewindow.h"
#include <QDebug>
#include <QPainter>
#include <QTextCodec>

EquipmentManageWindow::EquipmentManageWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EquipmentManageWindow)
{
    ui->setupUi(this);
    ui->pushButton->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton2->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton3->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton4->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton5->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton6->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton7->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton8->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton9->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton10->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton11->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton12->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton13->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(green).png);");
    ui->pushButton14->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(red).png);");
    ui->pushButton15->setStyleSheet("border-image: url(:/Resource/Alarm/alarm(gray).png);");

    QString str = QString("中文%1 and %2").arg("xx");
    qDebug() << str;

}

EquipmentManageWindow::~EquipmentManageWindow()
{
    delete ui;
}

void EquipmentManageWindow::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.drawText(500, 500, "你好");

    painter.drawPixmap(400, 500, 50, 150,QPixmap(":/Resource/login_user.png"));
}

