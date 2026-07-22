#include <iostream>
#include <vector>
#include <utility> // For std::swap

// Rearranges the array and returns the final index of the pivot
int partition(std::vector<int>& arr, int low, int high) {
    // Select the rightmost element as the pivot
    int pivot = arr[high]; 
    
    // Index of the smaller element
    int i = low - 1; 

    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; 
            std::swap(arr[i], arr[j]);
        }
    }
    // Place pivot in its correct sorted position
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Recursive Quick Sort function
void quickSort(std::vector<int>& arr, int low, int high) {
    // Base case: validation for subarrays containing at least two elements
    if (low < high) {
        // pi is the partitioning index
        int pi = partition(arr, low, high);

        // Separately sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Helper function to print the vector
void printVector(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> data = {10, 7, 8, 9, 1, 5};
    
    std::cout << "Unsorted Array: ";
    printVector(data);

    // Perform Quick Sort
    quickSort(data, 0, data.size() - 1);

    std::cout << "Sorted Array:   ";
    printVector(data);
    
    return 0;
}
