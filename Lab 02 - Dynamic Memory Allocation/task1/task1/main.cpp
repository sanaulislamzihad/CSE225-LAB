#include <iostream>
using namespace std;

int main() {

    int arraySize;                               // A variable to store the user specified array size
    cin >> arraySize;                            // Taking input and storing on the "arraySize" variable

    int *ptr = new int[arraySize];               // Dynamically allocating an integer array with arraySize length

    for (int i = 0; i < arraySize; i++) {
        cin >> ptr[i];                           // Taking input and saving its addresses on the array
    }
    for (int i = 0; i < arraySize; i++) {
        cout << ptr[i] << " ";                   // Printing each values of the array
    }
    cout << endl;

    delete[] ptr;                                // De-allocating memory

    return 0;
}
