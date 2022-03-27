#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsView>

class CustomWidgetV2 : public QWidget
{
    Q_OBJECT
public:
    explicit CustomWidgetV2(QWidget *parent = 0);
private:
    QGraphicsView *m_view;
    QGraphicsScene *m_scene;

};

#endif // MAINWINDOW_H
