#include <iostream>

void displayArray(int arr[], int size) {
    std::cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void deleteElement(int arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        std::cout << "Invalid position. Deletion failed." << std::endl;
        return;
    }

    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    --size;
    std::cout << "Element deleted successfully." << std::endl;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;

    int choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Input 1D array\n";
        std::cout << "2. Display array\n";
        std::cout << "3. Delete element from specified position\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the size of the array: ";
                std::cin >> size;

                std::cout << "Enter elements of the array:\n";
                for (int i = 0; i < size; ++i) {
                    std::cout << "Enter element " << i + 1 << ": ";
                    std::cin >> arr[i];
                }
                break;

            case 2:
                displayArray(arr, size);
                break;

            case 3:
                int position;
                std::cout << "Enter the position to delete an element: ";
                std::cin >> position;
                deleteElement(arr, size, position - 1);
                break;

            case 4:
                std::cout << "Exiting the program.\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
