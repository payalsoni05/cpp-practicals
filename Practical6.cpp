
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() override {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(8, 5);

    cout << "Circle Area: " << c.area() << endl;
    cout << "Rectangle Area: " << r.area() << endl;
    cout << "Triangle Area: " << t.area() << endl;

    return 0;
}
