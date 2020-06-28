#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include <mywindow.h>
#include <QPainter>
#include <QPixmap>
#include <QPaintEvent>
#include <QPushButton>
#include <QMainWindow>
#include <QList>
#include "heroplane.h"
#include "bullet.h"
#include <QTimer>
#include "map.h"
#include "enemyplane.h"
#include "bomb.h"

class secondwindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit secondwindow(QWidget *parent = nullptr);

    //初始化场景
    void initScene();

    //启动游戏
    void playGame();

    //更新所有游戏中元素坐标
    void updatePosition();

    //绘制到屏幕中
    void paintEvent(QPaintEvent *);

    //重写鼠标移动事件
    void mouseMoveEvent(QMouseEvent*);
    
    //地图对象
    Map m_map;

    //飞机对象
    HeroPlane m_hero;

    //子弹对象
    bullet temp_bullet;

    //定时器
    QTimer m_Timer;

    //爆炸数组
    Bomb m_bombs[BOMB_NUM];

    //敌机出场
    void enemyToScene();

    //碰撞检测
    void collisionDetection();

    //敌机数组
    EnemyPlane m_enemys[ENEMY_NUM];

    //敌机出场间隔记录
    int m_recorder;

private:


signals:
    void chooseBack();

};

#endif // SECONDWINDOW_H

