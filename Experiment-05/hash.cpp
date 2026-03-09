#include <iostream>
using namespace std;

#define SIZE 10

class HashTable {
private:
    int table[SIZE];

public:
    
    HashTable() {
        for (int i = 0; i < SIZE; i++) {
            table[i] = -1;   
        }
    }

   
    int hashFunction(int key) {
        return key % SIZE;
    }

    
    void insert(int key) {
        int index = hashFunction(key);

        if (table[index] == -1) {
            table[index] = key;
        } else {
            cout << "Collision occurred at index " << index << endl;
        }
    }

    
    void display() {
        cout << "\nIndex\tValue\n";
        cout << "----------------\n";
        for (int i = 0; i < SIZE; i++) {
            cout << i << "\t";
            if (table[i] != -1)
                cout << table[i];
            else
                cout << "Empty";
            cout << endl;
        }
    }
};

int main() {
    HashTable h;

    h.insert(23);
    h.insert(45);
    h.insert(12);
    h.insert(67);
    h.insert(13); 

    h.display();

    return 0;
}