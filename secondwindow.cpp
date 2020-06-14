#include "secondwindow.h"
#include <QPainter>
#include <QPixmap>
#include <QPaintEvent>
#include <QPushButton>
#include <QDebug>
#include <QTimer>
#include "mybutton.h"
#include "mywindow.h"
#include "tower.h"
#include "myobject.h"
#include <QPropertyAnimation>

secondwindow::secondwindow(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(800,600);
    //在第一关界面添加返回按钮
    MyButton* back_btn=new MyButton(":/D:/BaiduNetdiskDownload/backbutton-2.jpg");
    back_btn->setParent(this);
    back_btn->move(650,40);

    MyButton* setTower=new MyButton(":/D:/BaiduNetdiskDownload/button--1.jpg");
    setTower->setParent(this);
    setTower->move(500,500);
    connect(setTower,&MyButton::clicked,this,&secondwindow::set_tower);

    connect(setTower,&MyButton::clicked,this,&secondwindow::add_object);
    QTimer* timer=new QTimer(this);

    connect(timer,&QTimer::timeout,this,&secondwindow::update_scene);
    timer->start(5);

    connect(back_btn,&MyButton::clicked,this,[=](){
        emit chooseBack();
    });


}

//绘制第一关界面
void secondwindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    foreach(Tower* tower,tower_list)
       tower->paint(&painter);
    QPixmap pixmap(":/D:/BaiduNetdiskDownload/background-2.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}

void secondwindow::set_tower(){
    Tower*a_new_tower=new Tower(QPoint(200,200),":/D:/BaiduNetdiskDownload/tower-1.jpg");
    tower_list.push_back(a_new_tower);
    update();
}

void secondwindow::add_object(){
    myobject* object=new myobject(QPoint(0,500),QPoint(600,500),":/D:/BaiduNetdiskDownload/enemy.png");
    object_list.push_back(object);
    object->move();
    update();
}

void secondwindow::update_scene(){
    update();
}
