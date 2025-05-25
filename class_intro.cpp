#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    void setData(string b, int y) {
        brand = b;
        year = y;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car c1;
    c1.setData("Tesla", 2022);
    c1.display();

    return 0;
}
