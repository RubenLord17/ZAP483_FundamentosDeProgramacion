// MathClient.cpp 
// Fortino Ruben Arias Lordmendez 
//

#include <iostream>
#include "Proyecto11.h"

int main()
{
    double a = 7.4;
    int b = 99;

    std::cout << "a + b = " <<
        Proyecto11::Arithmetic::Add(a, b) << std::endl;
    std::cout << "a - b = " <<
        Proyecto11::Arithmetic::Subtract(a, b) << std::endl;
    std::cout << "a * b = " <<
        Proyecto11::Arithmetic::Multiply(a, b) << std::endl;
    std::cout << "a / b = " <<
        Proyecto11::Arithmetic::Divide(a, b) << std::endl;

    return 0;
}