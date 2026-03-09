#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n--- ARRAY OPERATIONS MENU ---\n";
        cout << "1. Display Array\n";
        cout << "2. Sum of Elements\n";
        cout << "3. Average of Elements\n";
        cout << "4. Find Maximum and Minimum\n";
        cout << "5. Search an Element\n";
        cout << "6. Sort Array (Ascending)\n";
        cout << "7. Reverse Array\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array elements: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2: {
                int sum = 0;
                for (int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum << endl;
                break;
            }

            case 3: {
                int sum = 0;
                for (int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Average = " << (float)sum / n << endl;
                break;
            }

            case 4: {
                int max = arr[0], min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                cout << "Maximum = " << max << endl;
                cout << "Minimum = " << min << endl;
                break;
            }

            case 5:
                cout << "Enter element to search: ";
                cin >> key;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << "Element found at position " << i + 1 << endl;
                        break;
                    }
                    if (i == n - 1)
                        cout << "Element not found\n";
                }
                break;

            case 6:
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] > arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                cout << "Array sorted in ascending order.\n";
                break;

            case 7:
                for (int i = 0; i < n / 2; i++) {
                    int temp = arr[i];
                    arr[i] = arr[n - i - 1];
                    arr[n - i - 1] = temp;
                }
                cout << "Array reversed.\n";
                break;

            case 0:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
