#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;  // Return the index if the element is found
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int size, choice, key, result;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    do {
        cout << "\nMenu:\n";
        cout << "1. Linear Search\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to search: ";
                cin >> key;
                result = linearSearch(arr, size, key);
                if (result != -1) {
                    cout << "Element found at index " << result << endl;
                } else {
                    cout << "Element not found in the array" << endl;
                }
                break;
            case 2:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 2);

    return 0;
}
