#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>

class MyWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyWindow(QWidget *parent=nullptr);
    void paintEvent(QPaintEvent *);

private:

signals:
    void chooseBack();
};

#endif // MYWINDOW_H
