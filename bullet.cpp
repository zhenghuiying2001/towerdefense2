#include "bullet.h"

bullet::bullet()
{
    //加载子弹资源
    m_bullet.load(BULLET_PATH);
    
    //子弹的坐标
    m_X=200;
    m_Y=200;
    
    //子弹状态
    m_Free=true;
    
    //子弹速度
    m_Speed=BULLET_SPEED;
    
    //子弹边框
    m_Rect.setWidth(m_bullet.width());
    m_Rect.setHeight(m_bullet.height());
    m_Rect.moveTo(m_X,m_Y);
    
}

void bullet::updatePosition()
{
    //空闲状态下的子弹，不需要计算坐标
    if(m_Free)
    {
        return;
    }

    //子弹向上移动
    m_Y-=m_Speed;
    m_Rect.moveTo(m_X,m_Y);
    
    //子弹的位置超出屏幕，重新变为空闲状态
    if(m_Y<=-m_Rect.height())
    {
        m_Free=true;
    }
}
