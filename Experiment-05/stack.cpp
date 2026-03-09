#include <iostream>
using namespace std;

#define MAX 5   // Maximum size of stack

class Stack {
private:
    int arr[MAX];
    int top;

public:
    // Constructor
    Stack() {
        top = -1;   // Stack is empty initially
    }

    // Push operation
    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Cannot insert " << value << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " inserted successfully." << endl;
        }
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Stack is empty." << endl;
        } else {
            cout << arr[top] << " deleted successfully." << endl;
            top--;
        }
    }

    // Display stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements are:" << endl;
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << endl;
            }
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    while (true) {
        cout << "\n--- STACK MENU ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
}