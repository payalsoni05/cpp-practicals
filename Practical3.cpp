
#include <iostream>
#include <utility>
using namespace std;

class Array {
private:
    int* data;
    int size;

public:
    // Default Constructor
    Array() {
        size = 0;
        data = nullptr;
        cout << "Default constructor called." << endl;
    }

    // Parameterized Constructor
    Array(int s) {
        size = s;
        data = new int[size];

        for (int i = 0; i < size; i++) {
            data[i] = i + 1;
        }

        cout << "Parameterized constructor called." << endl;
    }

    // Copy Constructor
    Array(const Array& other) {
        size = other.size;
        data = new int[size];

        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }

        cout << "Copy constructor called." << endl;
    }

    // Copy Assignment Operator
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new int[size];

            for (int i = 0; i < size; i++) {
                data[i] = other.data[i];
            }
        }

        cout << "Copy assignment called." << endl;
        return *this;
    }

    // Move Constructor
    Array(Array&& other) noexcept {
        size = other.size;
        data = other.data;

        other.size = 0;
        other.data = nullptr;

        cout << "Move constructor called." << endl;
    }

    // Move Assignment Operator
    Array& operator=(Array&& other) noexcept {
        if (this != &other) {
            delete[] data;

            size = other.size;
            data = other.data;

            other.size = 0;
            other.data = nullptr;
        }

        cout << "Move assignment called." << endl;
        return *this;
    }

    // Display Function
    void display() const {
        cout << "Array elements: ";

        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }

        cout << endl;
    }

    // Destructor
    ~Array() {
        delete[] data;
        cout << "Destructor called." << endl;
    }
};

int main() {
    Array a1;
    Array a2(5);

    a2.display();

    Array a3 = a2;
    a3.display();

    Array a4 = move(a2);
    a4.display();

    Array a5;
    a5 = a3;
    a5.display();

    Array a6;
    a6 = move(a4);
    a6.display();

    return 0;
}
