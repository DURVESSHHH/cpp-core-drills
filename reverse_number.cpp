#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Loop to reverse the digits of the number
    while (num != 0) {
        int digit = num % 10; // Extract the last digit of the number
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    // Output the reversed number
    cout << "Reversed number: " << reversed << endl;
    return 0;
}
// This program reverses a given number by extracting its digits and reconstructing it in reverse order. 
// It uses a while loop to repeatedly extract the last digit of the number and build the reversed number until the original number becomes zero.