#include "timestamp.h"


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

bool operator > (timeStamp &obj1, timeStamp &obj2)
{
    if (obj1.getHours() > obj2.getHours())
        return true;
    else
        return false;
}
bool operator!=(timeStamp &obj1, timeStamp &obj2)
{
    if (obj1.getHours() != obj2.getHours())
        return true;
    else
        return false;
}

void timeStamp::printTime()
{
    cout << seconds << " " << minutes << " " << hours << " " << endl;
}
