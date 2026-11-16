
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string color, model;
    int year;
    bool engineStarted;
    bool moving;

public:
    // Constructor initializes car details
    Car(int y, string c, string m) {
        year = y;
        color = c;
        model = m;
        engineStarted = false;
        moving = false;

        cout << "The car created is " << year << " "
             << color << " " << model << endl;
    }

    // Public member function to display car details
    void display() {
        cout << "Your car is: " << year << " "
             << color << " " << model << endl;
    }

    void start() {
        engineStarted = true;
        cout << model << "'s engine starts." << endl;
    }

    void accelerate() {
        if (engineStarted) {
            moving = true;
            cout << model << "'s moves forward." << endl;
        }
    }

    void decelerate() {
        if (moving) {
            moving = false;
            cout << model << "'s slows to a halt." << endl;
        }
    }

    void turnOff() {
        engineStarted = false;
        cout << model << "'s engine has been turned off." << endl;
    }

    void stayStill() {
        cout << model << " stays still. Start the Car!" << endl;
    }
};

int main() {
    Car car1(2020, "White", "Toyota");
    Car car2(2020, "Black", "Mahindra");

    cout << endl;

    car1.display();
    cout << endl;

    car1.start();
    car1.accelerate();
    car1.decelerate();
    car1.turnOff();

    cout << endl;

    car2.display();
    car2.stayStill();
    car2.start();
    car2.accelerate();

    return 0;
}



      
        
 
