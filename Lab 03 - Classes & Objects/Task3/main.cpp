#include <iostream>
#include "dynarr2d.cpp"
using namespace std;

int main()
{
    int rows, cols;
    int input;
    cout << "Enter the number of rows and cols: " << endl;
    cin >> rows >> cols;
    dynArr arr(rows, cols);
    cout << "Enter values: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Input value for row [" << i + 1 << "] and col [" << j + 1 << "]: ";
            cin >> input;
            arr.setValue(i, j, input);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr.getValue(i, j) << " ";
        }
        cout << endl;
    }
    int newRows;
    int newCols;
    cout << "Enter the number of rows and cols for resized array: " << endl;
    cin >> newRows >> newCols;
    arr.allocate(newRows, newCols);
    cout << "Printing resized 2d array: " << endl;
    for (int i = 0; i < newRows; i++)
    {
        for (int j = 0; j < newCols; j++)
        {
            cout << arr.getValue(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
