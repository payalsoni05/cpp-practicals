
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack {
private:
    T arr[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if (top == 4) {
            cout << "Stack is full!" << endl;
        } else {
            arr[++top] = value;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Popped: " << arr[top--] << endl;
        }
    }

    void display() {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int> s1;
    Stack<float> s2;
    Stack<string> s3;

    cout << "--- Integer Stack ---" << endl;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();

    cout << "\n--- Float Stack ---" << endl;
    s2.push(2.5f);
    s2.push(4.5f);
    s2.display();

    cout << "\n--- String Stack ---" << endl;
    s3.push("Hello");
    s3.push("Welcome");
    s3.display();

    return 0;
}
