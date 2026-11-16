
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getPersonDetails() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int rollNumber;
    string course;

public:
    void getStudentDetails() {
        getPersonDetails();

        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore();

        cout << "Enter course: ";
        getline(cin, course);
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

class GraduateStudent : public Student {
private:
    string researchTopic;

public:
    void getGraduateDetails() {
        getStudentDetails();

        cout << "Enter research topic: ";
        getline(cin, researchTopic);
    }

    void displayGraduateDetails() {
        cout << "\n--- GRADUATE STUDENT DETAILS ---" << endl;
        displayStudentDetails();
        cout << "Research Topic: " << researchTopic << endl;
    }
};

int main() {
    GraduateStudent g;

    g.getGraduateDetails();
    g.displayGraduateDetails();

    return 0;
}
