
#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Function overloading
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    void display(string message) {
        cout << message;
        display();
    }

    // Operator overloading
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1(5, 3);
    Complex c2(2, 4);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Complex c3 = c1 + c2;

    c3.display("Sum of Complex Numbers: ");

    return 0;
}
