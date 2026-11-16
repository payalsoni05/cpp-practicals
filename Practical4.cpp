
#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
        cout << name << " object created." << endl;
    }

    ~Student() {
        cout << name << " object destroyed." << endl;
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    cout << "--- UNIQUE POINTER ---" << endl;

    {
        unique_ptr<Student> s1 =
            make_unique<Student>("Payal");

        s1->display();
    }

    cout << "\n--- SHARED POINTER ---" << endl;

    {
        shared_ptr<Student> s2 =
            make_shared<Student>("Asha");

        cout << "Reference count: " << s2.use_count() << endl;

        {
            shared_ptr<Student> s3 = s2;
            cout << "Reference count: " << s2.use_count() << endl;
            s3->display();
        }

        cout << "Reference count: " << s2.use_count() << endl;
    }

    cout << "\nMemory released automatically." << endl;

    return 0;
}
