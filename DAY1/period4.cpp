#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int studentID;
    string name;
    int age;
    string birthDate;

    void display() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Birthdate: " << birthDate << endl;
    }
};

int main() {
    Student student1;
    student1.studentID = 1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.birthDate = "2003-01-01";

    student1.display();

    return 0;
}
