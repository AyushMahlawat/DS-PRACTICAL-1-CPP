#include <iostream>

using namespace std;

void displayArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement(int arr[], int& size, int position, int element) {
    if (position < 0 || position > size) {
        cout << "Invalid position. Element not inserted." << endl;
        return;
    }

    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;
    cout << "Element inserted successfully." << endl;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input array\n";
        cout << "2. Display array\n";
        cout << "3. Insert element at specified position\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the size of the array: ";
                cin >> size;
                cout << "Enter " << size << " elements:\n";
                for (int i = 0; i < size; ++i) {
                    cin >> arr[i];
                }
                break;

            case 2:
                displayArray(arr, size);
                break;

            case 3:
                int position, element;
                cout << "Enter the position to insert: ";
                cin >> position;
                cout << "Enter the element to insert: ";
                cin >> element;
                insertElement(arr, size, position, element);
                break;

            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
