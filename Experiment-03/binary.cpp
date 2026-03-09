#include <iostream>
using namespace std;

int main() {
    int arr[10], n, key, i, j, temp;
    int low, high, mid, pos = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter element to search: ";
    cin >> key;

    
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            pos = mid;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (pos == -1) {
        cout << "Element not found";
        return 0;
    }

    
    cout << "Element found at positions: ";

    
    i = pos;
    while (i >= 0 && arr[i] == key) {
        i--;
    }

   
    i++;
    while (i < n && arr[i] == key) {
        cout << i + 1 << " ";
        i++;
    }

    return 0;
}
