#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    int** ptr = new int*[rows];
    int* countCols = new int[rows];

    for (int i = 0; i < rows; i++) {
        cout << "Enter size of row " << i + 1 << ": ";
        cin >> cols;

        countCols[i] = cols;

        ptr[i] = new int[cols];

        cout << "Enter " << cols << " value(s) for row " << i + 1 << ":" << endl;
        for (int j = 0; j < cols; j++) {
            cin >> ptr[i][j];
        }
    }

    cout << "The jagged array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < countCols[i]; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] ptr[i];
    }
    delete[] ptr;
    delete[] countCols;

    return 0;
}
