#include "mainwindow.h"

#include <QApplication>
#include <QtGui>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QScopedPointer<QWidget> widget(new CustomWidgetV2());
    widget->show();
    return app.exec();
}
