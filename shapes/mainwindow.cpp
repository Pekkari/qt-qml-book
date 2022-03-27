#include "mainwindow.h"

#include <QVBoxLayout>
#include <QGraphicsItem>

CustomWidgetV2::CustomWidgetV2(QWidget *parent) :
    QWidget(parent)
{
    m_view = new QGraphicsView(this);
    m_scene = new QGraphicsScene(this);
    m_view->setScene(m_scene);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(m_view);
    setLayout(layout);

    QGraphicsItem* rect1 = (QGraphicsItem*) m_scene->addRect(0,0, 40, 40, Qt::NoPen, QColor("#FFBB33"));
    rect1->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsMovable);
}
