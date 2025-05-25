#include <iostream>
using namespace std;

class Base {
private:
    int privateVar = 1;
protected:
    int protectedVar = 2;
public:
    int publicVar = 3;

    void showAccess() {
        cout << "Private: " << privateVar << ", Protected: " << protectedVar << ", Public: " << publicVar << endl;
    }
};

class Derived : public Base {
public:
    void accessBase() {
        // cout << privateVar; // ❌ Not accessible
        cout << "Protected: " << protectedVar << endl;
        cout << "Public: " << publicVar << endl;
    }
};

int main() {
    Derived d;
    d.accessBase();
    // d.privateVar = 5; // ❌ Not allowed
    // d.protectedVar = 5; // ❌ Not allowed
    d.publicVar = 10;
    cout << "Public from main: " << d.publicVar << endl;
    return 0;
}
