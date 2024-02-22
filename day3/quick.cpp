// 2. Problem: Quick Sort Implementation

// Problem Statement:
// Implement the quick sort algorithm to sort an array of integers.

// Input:
// An array of integers.

// Output:
// The sorted array.

// Example:
// Input:
// [5, 3, 8, 2, 7, 1, 6, 4]
// Output:
// [1, 2, 3, 4, 5, 6, 7, 8]

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[high];
    arr[high] = temp;
    return i; // pivot index
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {5, 3, 8, 2, 7, 1, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
