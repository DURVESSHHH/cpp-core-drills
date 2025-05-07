#include <iostream>

int main() {
    int a, b;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "Enter operator (+ - * / %): ";
    std::cin >> op;

    switch(op) {
        case '+':
            std::cout << "Result: " << (a + b) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << (a - b) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << (a * b) << std::endl;
            break;
        case '/':
            if (b == 0)
                std::cout << "Error: Division by zero!" << std::endl;
            else
                std::cout << "Result: " << (a / b) << std::endl;
            break;
        case '%':
            if (b == 0)
                std::cout << "Error: Modulo by zero!" << std::endl;
            else
                std::cout << "Result: " << (a % b) << std::endl;
            break;
        default:
            std::cout << "Error: Invalid operator." << std::endl;
    }

    return 0;
}
