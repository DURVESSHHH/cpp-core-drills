#include <iostream>
using namespace std;

struct Player {
    string name;
    int score;
};

int main() {
    int n;
    cout << "Enter number of players: ";
    cin >> n;
    cin.ignore(); // clear input buffer

    Player* players = new Player[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter name: ";
        getline(cin, players[i].name);
        cout << "Enter score: ";
        cin >> players[i].score;
        cin.ignore(); // clear input buffer
    }

    cout << "\nPlayer Data:\n";
    for (int i = 0; i < n; i++) {
        cout << players[i].name << " - " << players[i].score << endl;
    }

    delete[] players;
    return 0;
}
