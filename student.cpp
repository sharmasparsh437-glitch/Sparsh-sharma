#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    int roll;

public:
    // Constructor
    Student(string n, int a, int r) {
        name = n;
        age = a;
        roll = r;
        cout << "Constructor called: Student object created." << endl;
    }

    // Function to display student details
    void display() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called: Student object destroyed." << endl;
    }
};

int main() {
    // Creating object of Student
    Student s1("Rahul", 20, 101);
    
    s1.display();

    return 0;
}
