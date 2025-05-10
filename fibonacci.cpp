#include <iostream> // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: to standard functions

int main() {
    int n; // Declare an integer variable to store the number of Fibonacci terms
    cout << "Enter number of Fibonacci terms: "; // Prompt the user to enter the number of terms
    cin >> n; // Read the user input and store it in the variable `n`

    // Check if the user entered a non-positive number
    if (n <= 0) {
        cout << "Enter a positive number.\n"; // Inform the user that the input must be positive
        return 1; // Exit the program with a non-zero status to indicate an error
    }

    // Initialize the first two terms of the Fibonacci sequence
    int a = 0, b = 1;
    cout << "Fibonacci Series: "; // Output the label for the Fibonacci series

    // Loop to generate and print the Fibonacci sequence up to `n` terms
    for (int i = 0; i < n; i++) {
        cout << a << " "; // Print the current term of the Fibonacci sequence
        int next = a + b; // Calculate the next term in the sequence
        a = b; // Update `a` to the current value of `b`
        b = next; // Update `b` to the newly calculated next term
    }

    cout << endl; // Print a newline character after the series
    return 0; // Return 0 to indicate successful program execution
}
