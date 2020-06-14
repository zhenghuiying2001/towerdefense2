#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QMainWindow>

class thirdwindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit thirdwindow(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent*);
signals:
    void chooseBack();
public slots:
};

#endif // THIRDWINDOW_H
