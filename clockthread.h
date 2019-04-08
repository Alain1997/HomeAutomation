#ifndef CLOCKTHREAD_H
#define CLOCKTHREAD_H
#include <QThread>
#include "mainwindow.h"
#include <ctime>
#include "main.h"

class clockThread : public QThread
{
public:
    explicit clockThread(MainWindow*);
    void run();
private:
    MainWindow* screen;
    time_t currentTime;
    struct tm *localTime;
};

#endif // CLOCKTHREAD_H
