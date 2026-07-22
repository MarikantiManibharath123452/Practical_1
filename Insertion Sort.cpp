#include <iostream>

// Function to perform insertion sort on an array
void insertionSort(int arr[], int size) {
    // Start from the second element (index 1) as index 0 is already "sorted"
    for (int i = 1; i < size; i++) {
        int key = arr[i]; // The element currently being positioned
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Place the key at its correct sorted position
        arr[j + 1] = key;
    }
}

// Utility function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int data[] = {12, 11, 13, 5, 6};
    int size = sizeof(data) / sizeof(data[0]);

    std::cout << "Original array: ";
    printArray(data, size);

    insertionSort(data, size);

    std::cout << "Sorted array:   ";
    printArray(data, size);

    return 0;
}
