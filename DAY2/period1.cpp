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

    cout << students[0].studentID << endl;
    cout << students[0].name << endl;
    cout << students[0].age << endl;
    cout << students[0].birthDate << endl;

    cout << students[1].studentID << endl;
    cout << students[1].name << endl;
    cout << students[1].age << endl;
    cout << students[1].birthDate << endl;

    return 0;
}
