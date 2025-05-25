#include <iostream>
using namespace std;

int main() {
    int x = 10; // Declare an integer variable x and initialize it to 10
    int* p = &x; // Declare a pointer p and assign it the address of x

    cout << "Value of x: " << x << endl; // Print the value of x
    cout << "Address of x: " << &x << endl; // Print the address of x
    cout << "Pointer p holds: " << p << endl; // Print the value stored in pointer p (address of x)
    cout << "Value pointed by p: " << *p << endl; // Print the value pointed to by p (value of x)

    *p = 20; // Change the value of x through the pointer p
    cout << "New value of x: " << x << endl; // Print the new value of x

    return 0; // Indicate successful program termination
}
