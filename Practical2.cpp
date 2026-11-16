
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    float marks;

public:
    string name;

    void getData() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayData() {
        cout << "\n--- STUDENT DETAILS ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.getData();
    s1.displayData();

    return 0;
}
