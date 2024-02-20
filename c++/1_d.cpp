#include <iostream>
#include <algorithm>

using namespace std;

void reverseArray(int arr[], int size) {
    reverse(arr, arr + size);
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int choice;

    do {
        cout << "\nMenu:\n1. Reverse the array\n2. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                reverseArray(arr, size);
                cout << "Array reversed successfully." << endl;
                break;

            case 2:
                cout << "Exiting the program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }

    } while (choice != 2);

    return 0;
}
