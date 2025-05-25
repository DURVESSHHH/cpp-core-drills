#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

class SportsCar : public Car {
public:
    void turbo() {
        cout << "Turbo boost activated!" << endl;
    }
};

int main() {
    SportsCar sc;
    sc.start();
    sc.drive();
    sc.turbo();
    return 0;
}
