#ifndef TIMESTAMP_H
#define TIMESTAMP_H


class timeStamp
{
    private:
         int seconds;
         int minutes;
         int hours;
    public:
        timeStamp();
        timeStamp(int s, int m, int h);
        void printTime();

        int getHours();

        bool operator>(timeStamp &t2);
};

#endif // TIMESTAMP_H
