#include "dynarr.h"
#include <iostream>
using namespace std;

template <typename T>
dynArr<T>::dynArr()
{
    data = NULL;
    size = 0;
}

template <typename T>
dynArr<T>::dynArr(int s)
{
    data = new T[s];
    size = s;
}

template <typename T>
dynArr<T>::~dynArr()
{
    delete[] data;
}

template <typename T>
T dynArr<T>::getValue(int index)
{
    return data[index];
}

template <typename T>
void dynArr<T>::setValue(int index, T value)
{
    data[index] = value;
}

// Explicit instantiation for char type
// (required because we are using templates in a .cpp file)
template class dynArr<char>;
