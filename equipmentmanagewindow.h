#ifndef EQUIPMENTMANAGEWINDOW_H
#define EQUIPMENTMANAGEWINDOW_H

#include <QWidget>

namespace Ui {
class EquipmentManageWindow;
}

class EquipmentManageWindow : public QWidget
{
    Q_OBJECT

public:
    explicit EquipmentManageWindow(QWidget *parent = 0);
    ~EquipmentManageWindow();

    void paintEvent(QPaintEvent *);

private:
    Ui::EquipmentManageWindow *ui;
};

#endif // EQUIPMENTMANAGEWINDOW_H
