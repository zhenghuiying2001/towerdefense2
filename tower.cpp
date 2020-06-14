#include "tower.h"
#include <QPoint>
#include <QPixmap>
#include <QPainter>

Tower::Tower(QPoint pos,QString pixFileName) : QObject(0),_pixmap(pixFileName)
{
_pos=pos;
}
//绘制炮塔
void Tower::paint(QPainter *painter){
    painter->drawPixmap(_pos,_pixmap);
}
