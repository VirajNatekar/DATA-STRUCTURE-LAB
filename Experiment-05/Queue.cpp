#include <iostream>
using namespace std;

class que{
    int front, rear;
    int capacity;
    int *array;

public:
    que(int capacity){
        this->capacity = capacity;
        front = -1;
        rear = -1;
        array = new int[capacity];
    }

    void enqueue(int data){
        if(rear == capacity - 1){
            cout << "Queue is full" << endl;
            return;
        }

        if(front == -1)
            front = 0;

        rear++;
        array[rear] = data;
    }

    void dequeue(){
        if(front == -1 || front > rear){
            cout << "Queue is empty" << endl;
            return;
        }

        cout << array[front] << " dequeued" << endl;
        front++;
    }

    void display(){
        if(front == -1 || front > rear){
            cout << "Queue is empty" << endl;
            return;
        }

        for(int i = front; i <= rear; i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main(){

    int capacity;
    cout << "Enter queue size: ";
    cin >> capacity;

    que q(capacity);

    while(true){

        cout << "\n1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        int choice;
        cin >> choice;

        switch(choice){

            case 1:{
                int data;
                cout << "Enter element: ";
                cin >> data;
                q.enqueue(data);
                break;
            }

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                exit(0);

            default:
                cout << "Invalid choice" << endl;
        }
    }
}