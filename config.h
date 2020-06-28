#ifndef CONFIG_H
#define CONFIG_H

/********************* 游戏配置数据 ***********************/
#define GAME_TITLE "塔防游戏 v1.0" //标题
#define GAME_RATE 10 //定时器刷新时间间隔

/*********************地图配置数据 ************************/
#define MAP_PATH ":/res/background-4.jpg" //地图路径
#define MAP_SCROLL_SPEED 2 //地图滚动的速度

/*********************飞机配置数据 ************************/
#define HERO_PATH ":/res/enemy.png"

/*********************子弹配置数据 ************************/
#define BULLET_PATH ":/res/bullet_13.png" //子弹图片路径
#define BULLET_SPEED 5 //子弹移动速度
#define BULLET_NUM 30 //弹匣中子弹总数
#define BULLET_INTERVAL 20 //发射子弹时间间隔

/*********************敌机配置数据 ************************/
#define ENEMY_PATH  ":/res/img-plane_6.png" //敌机图片路径
#define ENEMY_SPEED 5 //敌机移动速度
#define ENEMY_NUM 20 //敌机总数量
#define ENEMY_INTERVAL 30 //敌机出场时间间隔

/*********************爆炸配置数据 ************************/
#define BOMB_PATH ":/res/bomb-%1.png" //爆炸资源图片
#define BOMB_NUM 20 //爆炸数量
#define BOMB_MAX 7 //爆炸图片最大索引
#define BOMB_INTERVAL 20 //爆炸切图时间间隔

#endif // CONFIG_H
