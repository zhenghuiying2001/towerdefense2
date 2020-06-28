#ifndef BULLET_H
#define BULLET_H

#include "config.h"
#include <QPixmap>

class bullet
{
public:
    bullet();
    
    //更新子弹坐标
    void updatePosition();
    
public:
    //子弹资源对象
    QPixmap m_bullet;
    //子弹坐标
    int m_X;
    int m_Y;
    //子弹移动速度
    int m_Speed;
    //子弹是否闲置
    bool m_Free;
    //子弹的矩形边框
    QRect m_Rect;
};

#endif // BULLET_H
