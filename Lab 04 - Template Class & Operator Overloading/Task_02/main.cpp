#include <iostream>
#include "complex.cpp"

using namespace std;

int main()
{
    Complex num1(2, 3);
    Complex num2(4, 5);
    Complex sum, product;

    sum = num1 + num2;
    product = num1 * num2;

    sum.printNumber();
    product.printNumber();

    if (num1 != num2)
    {
        cout << "Not Equal" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }

    return 0;
}
