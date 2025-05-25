#include <iostream>
using namespace std;

int main() {
    char str[100]; // Declare a character array to store the input string (max 99 chars + null terminator)
    cout << "Enter a string: ";
    cin.getline(str, 100); // Read a line of input into str

    int length = 0; // Initialize length counter
    // Loop through the string until the null terminator is found
    while (str[length] != '\0') {
        length++; // Increment length for each character
    }

    cout << "Length: " << length << endl; // Output the length of the string
    return 0; // Indicate successful program termination
}
