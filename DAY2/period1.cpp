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

    Student student1;
    student1.studentID = 1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.birthDate = "2003-01-01";

    Student student2;
    student2.studentID = 2;
    student2.name = "Jane Smith";
    student2.age = 22;
    student2.birthDate = "2001-02-02";

    students.push_back(student1);
    students.push_back(student2);

    for (const auto& student : students) {
        student.display();
    }

    return 0;
}
