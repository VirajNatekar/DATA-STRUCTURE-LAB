#include <iostream>
using namespace std;

int main() {
    int arr[] = {7,4,5,1,9};
    int n = 5;

    for (int i = 1; i < n; i++) {
        int key = arr[i];   // element to be inserted
        int j = i - 1;

        // shift elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // place key at correct position
        arr[j + 1] = key;
    }

    // print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
