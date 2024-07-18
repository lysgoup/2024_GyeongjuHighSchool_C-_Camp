#include <iostream>
#include <string>
using namespace std;

int main() {
    int studentID;
    string name;
    int age;
    string birthDate;

    cout << "Enter student ID: ";
    cin >> studentID;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter birthdate (YYYY-MM-DD): ";
    cin >> birthDate;

    cout << "Student ID: " << studentID << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Birthdate: " << birthDate << endl;

    return 0;
}
