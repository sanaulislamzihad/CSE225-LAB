#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    double real, imaginary;
public:
    Complex();
    Complex(double r, double i);
    Complex operator+(Complex num2);
    Complex operator*(Complex num2);
    bool operator!=(Complex num2);
    void printNumber();
};

#endif // COMPLEX_H
