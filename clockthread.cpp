#include "clockthread.h"
#include <iostream>
#include "mainwindow.h"
#include <ctime>

using namespace std;

clockThread::clockThread(MainWindow* screen): screen(screen)
{
}

void clockThread::run()
{
    while(1)
    {
        time( &currentTime );                   // Get the current time
        localTime = localtime( &currentTime );

        int Day    = localTime->tm_mday;
        int Month  = localTime->tm_mon + 1;
        int Year   = localTime->tm_year + 1900;
        int Hour = localTime->tm_hour;
        int Min    = localTime->tm_min;
        int Sec    = localTime->tm_sec;

        if((screen->lampAan == Hour && screen->minuten1 == Min && Sec == 0))
        {
            screen->lichtAan();
        }

        if((screen->lampUit == Hour && screen->minuten2 == Min && Sec == 0))
        {
            screen->lichtenUit();
        }
    }
}
