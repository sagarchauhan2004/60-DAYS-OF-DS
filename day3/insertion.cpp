// 1. Problem: Insertion Sort Implementation

// Problem Statement:
// Implement the insertion sort algorithm to sort an array of integers.

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

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {5, 3, 8, 2, 7, 1, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array:" << endl;
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array:" << endl;
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
