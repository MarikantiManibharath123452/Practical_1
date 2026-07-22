#include <iostream>
#include <vector>
#include <algorithm> // Required for std::swap

// Function to perform Selection Sort
void selectionSort(std::vector<int>& arr) {
    int n = arr.size();

    // Move the boundary of the unsorted subarray one by one
    for (int i = 0; i < n - 1; ++i) {
        // Assume the current element is the minimum
        int min_idx = i;

        // Test the rest of the array to find the actual minimum element
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // Update index of the minimum element
            }
        }

        // Swap the found minimum element with the first unsorted element
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
        }
    }
}

// Function to print the array elements
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> data = {64, 25, 12, 22, 11};

    std::cout << "Original array: ";
    printArray(data);

    selectionSort(data);

    std::cout << "Sorted array:   ";
    printArray(data);

    return 0;
}
