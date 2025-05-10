#include <iostream>
using namespace std;

int main() {
    char choice; // Variable to store the user's choice to continue or exit the loop
    do {
        int num; // Variable to store the number entered by the user
        cout << "Enter a number: "; // Prompt the user to enter a number
        cin >> num; // Read the number from the user

        // Check if the number is even or odd
        if (num % 2 == 0) {
            cout << num << " is even.\n"; // Output if the number is even
        } else {
            cout << num << " is odd.\n"; // Output if the number is odd
        }

        // Ask the user if they want to check another number
        cout << "Check another? (y/n): ";
        cin >> choice; // Read the user's choice
    } while (choice == 'y' || choice == 'Y'); // Repeat the loop if the user enters 'y' or 'Y'

    return 0; // Exit the program
}
