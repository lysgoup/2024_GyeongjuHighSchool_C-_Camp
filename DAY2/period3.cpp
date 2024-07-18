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
};

vector<Student> students;

void addStudents() {
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
}

void displayStudents() {
    for (int i = 0; i < students.size(); ++i) {
        cout << "Student ID: " << students[i].studentID << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Birthdate: " << students[i].birthDate << endl;
    }
}

int main() {
    addStudents();
    displayStudents();

    return 0;
}
