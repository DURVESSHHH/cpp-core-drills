#include <iostream>
using namespace std;

class Hero {
private:
    string name;
    int level;

public:
    Hero(string n, int l) {
        name = n;
        level = l;
    }

    void display() {
        cout << "Hero: " << name << ", Level: " << level << endl;
    }
};

int main() {
    Hero h1("Archer", 5);
    h1.display();

    return 0;
}
