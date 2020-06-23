#include "mainwindow.h"
#include "match.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Match game;
    w.show();
    QPainter painter(this);
    Brick mda = Brick(100,100);
    painter.drawImage(mda.getPos(), mda.getImage());
    return a.exec();
}
