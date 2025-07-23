#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main()
{
    int i;
    int size = 2;
    dynArr arr(size);
    arr.setValue(0, 12);
    arr.setValue(1, 23);
    for (i = 0; i < size; i++)
    {
        cout << arr.getValue(i) << " ";
    }
    cout << endl;
    size = 4;
    arr.allocate(size);
    arr.setValue(2, 98);
    arr.setValue(3, 41);
    for (i = 0; i < size; i++)
    {
        cout << arr.getValue(i) << " ";
    }
    cout << endl;
    return 0;
}
