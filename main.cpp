#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Базовые алгоритмы растеризации отрезков и кривых");
    //  w.resize(850,750);
    w.show();
    return a.exec();
}
