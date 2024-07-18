#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int studentID;
    string name;
    int age;
    string birthDate;
};

int main() {
    Student student1;
    student1.studentID = 1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.birthDate = "2003-01-01";

    cout << "Student ID: " << student1.studentID << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Birthdate: " << student1.birthDate << endl;

    return 0;
}
