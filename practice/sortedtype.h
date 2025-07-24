#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H

const int SIZE = 50;

#include <iostream>
using namespace std;

template <class T>
class SortedType
{
private:
    T *data;
    int currentSize;
    int pointTo;

public:
    SortedType();
    ~SortedType();
    int Length();
    bool IsFull();
    void MakeEmpty();
    void Insert(T value);
    void Search(T value, bool &found);
    void Delete(T value);
    void GetNext(T &value);
    void Reset();
};

#endif // SORTEDTYPE_H
