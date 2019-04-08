#include "serial.h"
#include <iostream>
#include <boost/asio.hpp>
#include <boost/asio/serial_port.hpp>

using namespace std;

Serial::Serial(string A,int lamp): port(A), m_port(m_io,port), lampNr(lamp)
{
    switch(lampNr)
    {
    case 1 :
        lampUit = 0;
        lampAan = 1;
        break;
    case 2 :
        lampUit = 3;
        lampAan = 2;
        break;
    case 3 :
        lampUit = 5;
        lampAan = 4;
        break;
    }
}

void Serial::turnOnLight()
{
    string message = to_string(lampAan);
    m_port.write_some(boost::asio::buffer(message.c_str(), message.size()) );
}

void Serial::turnOffLight()
{
    string message = to_string(lampUit);;
    m_port.write_some(boost::asio::buffer(message.c_str(), message.size()) );
}
