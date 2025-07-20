#include <iostream>
#include "dynarr.cpp"

using namespace std;

int main()
{
    dynArr<char> arr(5);

    char value;

    // Take 5 input values and store them in arr
    cout << "Enter 5 values: ";
    for (int i = 0; i < 5; ++i)
    {
        cin >> value;
        arr.setValue(i, value);
    }

    // Print all values stored in arr
    cout << "Values in arr are: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << arr.getValue(i) << " ";
    }
    cout << endl;

    return 0;
}
