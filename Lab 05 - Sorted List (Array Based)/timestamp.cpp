#include "timestamp.h"
#include <iostream>
using namespace std;

timeStamp::timeStamp()
{
    seconds = 0;
    minutes = 0;
    hours = 0;
}

timeStamp::timeStamp(int s, int m, int h)
{
    seconds = s;
    minutes = m;
    hours = h;
}

int timeStamp::getHours()
{
    return hours;
}

bool timeStamp::operator>(timeStamp &t2)
{
    if (this->getHours()>t2.getHours())
        return true;
    else
        return false;
}

void timeStamp::printTime()
{
    cout << seconds << " " << minutes << " " << hours << " " << endl;
}
