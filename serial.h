#ifndef SERIAL_H
#define SERIAL_H
#include <string>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/asio/serial_port.hpp>

using namespace std;

class Serial
{
public:
    Serial(string,int);
    void turnOnLight();
    void turnOffLight();
private:
    string port;
    int lampNr;
    int lampAan;
    int lampUit;
    boost::asio::io_service m_io;
    boost::asio::serial_port m_port;
};

#endif // SERIAL_H
