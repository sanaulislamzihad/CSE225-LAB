#include <iostream>
using namespace std;

int main() {

    int row, column;                             // Variables to store user specified row and column size
    cin >> row >> column;                        // Taking inputs and storing row and column size

    int **ptr = new int *[row];                  // Allocating a pointer array to be used to store "row" array addresses

    for (int i = 0; i < row; i++) {
        ptr[i] = new int[column];                // Dynamically allocating arrays to store the column elements
    }

    for (int i = 0; i < row; i++) {              // Taking input and saving its addresses on the arrays
        for (int j = 0; j < column; j++) {
            cin >> ptr[i][j];
        }
    }

    for (int i = 0; i < row; i++) {              // Printing each values of the arrays
        for (int j = 0; j < column; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] ptr;                                // De-allocating memory

    return 0;
}
