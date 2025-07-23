#include <iostream>
#include "dynarr.cpp"

using namespace std;

int main()
{
    int size = 5;
    int value;

    dynArr arr1();
    dynArr arr2(size);
    cout<<"Enter the values for the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> value;
        arr2.setValue(i, value);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr2.getValue(i) << " ";
    }

    return 0;

}
