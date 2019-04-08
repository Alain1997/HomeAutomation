#include "mainwindow.h"
#include <QApplication>
#include <thread>
#include "clockthread.h"
#include "main.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    clockThread clck1(&w);
    clck1.start();
    w.show();

    return a.exec();
}
