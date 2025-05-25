#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float gpa;
};

int main() {
    Student s1;

    cout << "Enter name: ";
    getline(cin, s1.name);

    cout << "Enter age: ";
    cin >> s1.age;

    cout << "Enter GPA: ";
    cin >> s1.gpa;

    cout << "\nStudent Info:\n";
    cout << "Name: " << s1.name << "\nAge: " << s1.age << "\nGPA: " << s1.gpa << endl;

    return 0;
}
