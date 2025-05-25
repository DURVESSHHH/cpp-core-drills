#include <iostream>
using namespace std;

class GameObject {
public:
    virtual void update() = 0; // pure virtual
};

class Player : public GameObject {
public:
    void update() override {
        cout << "Player updated." << endl;
    }
};

int main() {
    Player p;
    p.update();
    return 0;
}
