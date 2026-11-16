
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file;

    // Writing student records
    file.open("students.csv", ios::out);

    file << "RollNo,Name,Marks\n";
    file << "101,Payal,85\n";
    file << "102,Asha,90\n";
    file << "103,Riya,88\n";

    file.close();

    // Reading student records
    file.open("students.csv", ios::in);

    cout << "--- STUDENT RECORDS ---" << endl;

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    // Demonstrating file position functions
    file.clear();
    file.seekg(0, ios::beg);
    cout << "\nReading position (tellg): "
         << file.tellg() << endl;

    file.seekp(0, ios::end);
    cout << "Writing position (tellp): "
         << file.tellp() << endl;

    file.close();

    return 0;
}
