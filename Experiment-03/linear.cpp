#include <iostream>
using namespace std;

int main() {
    int arr[10], n, key, i;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    cout << "Element found at position(s): ";

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << i + 1 << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "Not found";
    }

    return 0;
}
