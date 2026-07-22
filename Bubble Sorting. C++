#include <iostream>
#include <utility> // Required for std::swap

// Function to perform optimized bubble sort
void bubbleSort(int arr[], int n) {
    bool swapped;
    
    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        // Inner loop to compare adjacent array elements
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true; // Mark that a swap occurred
            }
        }
        
        // If no two elements were swapped in the inner loop, the array is sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to print the elements of the array
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(data) / sizeof(data[0]);
    
    std::cout << "Original array:\n";
    printArray(data, size);
    
    bubbleSort(data, size);
    
    std::cout << "Sorted array in ascending order:\n";
    printArray(data, size);
    
    return 0;
}
