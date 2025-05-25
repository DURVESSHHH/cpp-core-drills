#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100]; // Declare a character array to store the input string (max 99 chars + null terminator)
    cout << "Enter a string: ";
    cin.getline(str, 100); // Read a line of input into str

    int len = strlen(str); // Get the length of the input string
    cout << "Reversed string: ";
    // Print the string in reverse order
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl; // Print a newline at the end
    return 0; // Indicate successful program termination
}
