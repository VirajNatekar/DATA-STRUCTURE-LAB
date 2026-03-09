#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 1, 4, 2, 3}, i, j, temp;

    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}
