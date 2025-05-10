#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace to avoid prefixing std::

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) { // Loop from 2 to the square root of the number
        if (num % i == 0) return false; // If divisible by i, it's not a prime number
    }
    return true; // If no divisors are found, the number is prime
}

int main() {
    cout << "Prime numbers from 1 to 100:\n"; // Print a message to indicate the range
    for (int i = 1; i <= 100; i++) { // Loop through numbers from 1 to 100
        if (isPrime(i)) { // Check if the current number is prime
            cout << i << " "; // Print the prime number
        }
    }
    cout << endl; // Print a newline at the end
    return 0; // Indicate successful program termination
}
