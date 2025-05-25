#include <iostream> // Include the iostream library for input and output

int main() { // Main function where program execution starts
    int a, b; // Declare two integer variables to store user input numbers
    char op; // Declare a character variable to store the operator

    std::cout << "Enter first number: "; // Prompt user for the first number
    std::cin >> a; // Read the first number from user input

    std::cout << "Enter second number: "; // Prompt user for the second number
    std::cin >> b; // Read the second number from user input

    std::cout << "Enter operator (+ - * / %): "; // Prompt user for the operator
    std::cin >> op; // Read the operator from user input

    switch(op) { // Switch statement to handle different operators
        case '+': // If operator is '+'
            std::cout << "Result: " << (a + b) << std::endl; // Output the sum
            break; // Exit the switch
        case '-': // If operator is '-'
            std::cout << "Result: " << (a - b) << std::endl; // Output the difference
            break; // Exit the switch
        case '*': // If operator is '*'
            std::cout << "Result: " << (a * b) << std::endl; // Output the product
            break; // Exit the switch
        case '/': // If operator is '/'
            if (b == 0) // Check for division by zero
                std::cout << "Error: Division by zero!" << std::endl; // Output error message
            else
                std::cout << "Result: " << (a / b) << std::endl; // Output the quotient
            break; // Exit the switch
        case '%': // If operator is '%'
            if (b == 0) // Check for modulo by zero
                std::cout << "Error: Modulo by zero!" << std::endl; // Output error message
            else
                std::cout << "Result: " << (a % b) << std::endl; // Output the remainder
            break; // Exit the switch
        default: // If operator is not recognized
            std::cout << "Error: Invalid operator." << std::endl; // Output error message
    }

    return 0; // Return 0 to indicate successful execution
}
