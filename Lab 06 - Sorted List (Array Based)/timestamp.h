#ifndef TIMESTAMP_H
#define TIMESTAMP_H
#include <iostream>
using namespace std;
class timeStamp
{
private:
    int seconds;
    int minutes;
    int hours;

public:
    timeStamp();
    timeStamp(int s, int m, int h);
    void setHours(int );
    void setMinutes(int );
    void setSeconds(int );
    int getHours();
    int getMinutes();
    int getSeconds();
    
    void printTime();
  
    

    friend bool operator> (timeStamp &obj1, timeStamp &obj2);
    friend bool operator!=(timeStamp &obj1, timeStamp &obj2);
};

#endif // TIMESTAMP_H
