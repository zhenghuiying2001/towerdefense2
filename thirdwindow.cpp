#include "thirdwindow.h"
#include <QPainter>
#include <QPixmap>
#include <QPaintEvent>
#include <QPushButton>
#include <QDebug>
#include "mybutton.h"
#include "mywindow.h"

thirdwindow::thirdwindow(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(800,600);
    //在第二关界面添加返回按钮
    MyButton* back_btn=new MyButton(":/D:/BaiduNetdiskDownload/backbutton-2.jpg");
    back_btn->setParent(this);
    back_btn->move(650,40);
    connect(back_btn,&MyButton::clicked,this,[=](){
        emit chooseBack();
    });
}

//绘制第二关界面
void thirdwindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/D:/BaiduNetdiskDownload/background-2.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}
