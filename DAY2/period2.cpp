#include <iostream>
#include <string>
#include <vector>
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
    vector<Student> students;

    for (int i = 0; i < 3; ++i) {
        Student student;
        cout << "Enter student ID: ";
        cin >> student.studentID;
        cout << "Enter name: ";
        cin >> student.name;
        cout << "Enter age: ";
        cin >> student.age;
        cout << "Enter birthdate (YYYY-MM-DD): ";
        cin >> student.birthDate;
        students.push_back(student);
    }

    for (const auto& student : students) {
        student.display();
    }

    return 0;
}
