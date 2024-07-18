#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
public:
  int id;
  string name;
  int age;
  string birthdate;
};

vector<Person> people;

void createPerson() {
  int id;
  string name;
  int age;
  string birthdate;

  cout << "Enter ID: ";
  cin >> id;
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter age: ";
  cin >> age;
  cout << "Enter birthdate (YYYY-MM-DD): ";
  cin >> birthdate;

  for (int i = 0; i < people.size(); i++) {
    if (people[i].id == id) {
      cout << "Person with this ID already exists. Please use a different ID."
           << endl;
      return;
    }
  }

  Person newPerson;
  newPerson.id = id;
  newPerson.name = name;
  newPerson.age = age;
  newPerson.birthdate = birthdate;

  people.push_back(newPerson);
  cout << "Person created successfully." << endl;
}

void readPeople() {
  if (people.empty()) {
    cout << "No people to display." << endl;
  } else {
    for (int i = 0; i < people.size(); i++) {
      cout << "ID: " << people[i].id << ", Name: " << people[i].name
           << ", Age: " << people[i].age
           << ", Birthdate: " << people[i].birthdate << endl;
    }
  }
}

void updatePerson() {
  int id;
  cout << "Enter person ID to update: ";
  cin >> id;

  bool found = false;
  for (int i = 0; i < people.size(); i++) {
    if (people[i].id == id) {
      cout << "Enter new name: ";
      cin >> people[i].name;
      cout << "Enter new age: ";
      cin >> people[i].age;
      cout << "Enter new birthdate (YYYY-MM-DD): ";
      cin >> people[i].birthdate;
      cout << "Person updated successfully." << endl;
      found = true;
      break;
    }
  }

  if (!found) {
    cout << "Person with ID " << id << " not found." << endl;
  }
}

void deletePerson() {
  int id;
  cout << "Enter person ID to delete: ";
  cin >> id;

  for (int i = 0; i < people.size(); i++) {
    if (people[i].id == id) {
      people.erase(people.begin() + i);
      cout << "Person deleted successfully." << endl;
      return;
    }
  }

  cout << "Person with ID " << id << " not found." << endl;
}

int main() {
  int choice;

  while (true) {
    cout << "\n1. Create Person\n2. Read People\n3. Update Person\n4. Delete "
            "Person\n5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
      createPerson();
    } else if (choice == 2) {
      readPeople();
    } else if (choice == 3) {
      updatePerson();
    } else if (choice == 4) {
      deletePerson();
    } else if (choice == 5) {
      cout << "Exiting..." << endl;
      break;
    } else {
      cout << "Invalid choice. Please try again." << endl;
    }
  }

  return 0;
}