#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include <mywindow.h>
#include <QPainter>
#include <QPixmap>
#include <QPaintEvent>
#include <QPushButton>
#include "myobject.h"
#include <QMainWindow>
#include <QList>
#include "tower.h"
class secondwindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit secondwindow(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent*);
    void set_tower();
    void add_object();
    void update_scene();
private:
    //管理塔
    QList<Tower*> tower_list;
    //管理敌人运动
    QList<myobject*> object_list;

signals:
    void chooseBack();

};

#endif // SECONDWINDOW_H

