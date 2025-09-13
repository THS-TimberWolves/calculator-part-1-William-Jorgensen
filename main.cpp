#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    std::string operation;
    float a;
    float b;

    std::cout << "Enter operation (add, subtract, multiply, divide, exponent, root, modulo): ";
    std::cin >> operation;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    if (operation == "add")
    {
        std::cout << a << " + " << b << " = " << a + b << std::endl;
    }
    else if (operation == "subtract")
    {
        std::cout << a << " - " << b << " = " << a - b << std::endl;
    }
    else if (operation == "multiply")
    {
        std::cout << a << " * " << b << " = " << a * b << std::endl;
    }
    else if (operation == "divide")
    {
        if (b != 0) {
            std::cout << a << " / " << b << " = " << a / b << std::endl;
        } else {
            std::cout << "Error: Division by zero" << std::endl;
        }
    }
    else if (operation == "exponent")
    {
        std::cout << a << " ^ " << b << " = " << std::pow(a, b) << std::endl;
    }
    else if (operation == "root")
    {
        if (b != 0) {
            std::cout << b << "th root of " << a << " = " << std::pow(a, 1.0f / b) << std::endl;
        } else {
            std::cout << "root of order zero error" << std::endl;
        }
    }
    else if (operation == "modulo")
    {
        if (b != 0) {
            std::cout << a << " % " << b << " = " << std::fmod(a, b) << std::endl;
        } else {
            std::cout << "modulo by zero error" << std::endl;
        }
    }
    else
    {
        std::cout << "invalid input error" << std::endl;
    }

    return 0;
}
