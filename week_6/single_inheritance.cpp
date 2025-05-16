#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNumber;

    void displayStudent() {
        displayInfo();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s;
    s.name = "Siddhit";
    s.age = 22;
    s.rollNumber = 101;

    s.displayStudent();

    return 0;
}
