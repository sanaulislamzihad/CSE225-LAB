#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex(double r, double i)
{
    real = r;
    imaginary = i;
}

Complex Complex::operator+(Complex num2)
{
    Complex temp;
    temp.real = real + num2.real;
    temp.imaginary = imaginary + num2.imaginary;
    return temp;
}

Complex Complex::operator*(Complex num2)
{
    Complex temp;
    temp.real = real * num2.real;
    temp.imaginary = imaginary * num2.imaginary;
    return temp;
}

bool Complex::operator!=(Complex num2)
{
    if (real == num2.real && imaginary == num2.imaginary)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void Complex::printNumber()
{
    cout << "real: " << real << ", imaginary: " << imaginary << endl;
}
