#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*funcPtr)(int, int);

    funcPtr = add;
    cout << "Add: " << funcPtr(3, 4) << endl;

    funcPtr = multiply;
    cout << "Multiply: " << funcPtr(3, 4) << endl;

    return 0;
}
