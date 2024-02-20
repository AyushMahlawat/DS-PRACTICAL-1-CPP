#include <iostream>

using namespace std;

void updateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            arr[i] += 5;
        } else {
            arr[i] *= 2;
        }
    }
}

void displayArray(int arr[], int size) {
    cout << "Updated Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Update Array\n";
        cout << "2. Display Array\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                updateArray(arr, size);
                cout << "Array updated successfully." << endl;
                break;
            case 2:
                displayArray(arr, size);
                break;
            case 3:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
