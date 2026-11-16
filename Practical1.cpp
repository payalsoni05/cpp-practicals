
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Variables of different data types
    string name;
    int rollNumber;
    double marks1, marks2, marks3;
    double attendance;

    // Constant value
    const double PASS_MARKS = 40.0;

    // Taking input from user
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> rollNumber;

    cout << "Enter marks in three subjects: ";
    cin >> marks1 >> marks2 >> marks3;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    // Arithmetic operators
    double total = marks1 + marks2 + marks3;
    double average = total / 3.0;

    // Relational operator
    bool passed = (marks1 >= PASS_MARKS &&
                   marks2 >= PASS_MARKS &&
                   marks3 >= PASS_MARKS);

    // Logical operator
    bool eligible = passed && (attendance >= 75);

    // Displaying results
    cout << "\n----- STUDENT RESULT -----\n";
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << fixed << setprecision(2);
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    cout << "Result: " << (passed ? "Pass" : "Fail") << endl;
    cout << "Attendance Eligibility: "
         << (eligible ? "Eligible" : "Not Eligible") << endl;

    return 0;
}
