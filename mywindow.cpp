#include "mywindow.h"
#include <QPainter>
#include <QPixmap>
#include <QPaintEvent>
#include <QPushButton>
#include <QDebug>
#include "mybutton.h"
#include "secondwindow.h"
#include "thirdwindow.h"
#include <QTimer>
MyWindow::MyWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->setFixedSize(800,600);
    //在选关界面添加返回按钮
    MyButton* back_btn=new MyButton(":/D:/BaiduNetdiskDownload/backbutton-2.jpg");
    back_btn->setParent(this);
    back_btn->move(650,40);
    connect(back_btn,&MyButton::clicked,this,[=](){
        back_btn->zoomdown();
        back_btn->zoomup();
        QTimer::singleShot(500,this,[=](){
           emit chooseBack();
        });

    });

    //在选关界面添加选择第一关按钮
    MyButton* btn=new MyButton(":/D:/BaiduNetdiskDownload/number-1.jpg");
    btn->setParent(this);
    btn->move(50,50);
    secondwindow* swindow=new secondwindow;
    connect(btn,&QPushButton::clicked,this,[=](){
        btn->zoomdown();
        btn->zoomup();
        QTimer::singleShot(500,this,[=](){
            this->close();
            swindow->show();
        });
     });
    connect(swindow,&secondwindow::chooseBack,this,[=](){
       swindow->hide();
        this->show();
    });

    //在选关界面添加选择第二关按钮
    MyButton* btn2=new MyButton(":/D:/BaiduNetdiskDownload/number-2.jpg");
    btn2->setParent(this);
    btn2->move(450,200);
    thirdwindow* twindow=new thirdwindow;
    connect(btn2,&QPushButton::clicked,this,[=](){
       btn2->zoomdown();
       btn2->zoomup();
       QTimer::singleShot(500,this,[=](){
           this->close();
           twindow->show();
        });
     });
    connect(twindow,&thirdwindow::chooseBack,this,[=](){
         twindow->hide();
         this->show();
     });
}


//绘制选关界面
void MyWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/D:/BaiduNetdiskDownload/background-1");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}
