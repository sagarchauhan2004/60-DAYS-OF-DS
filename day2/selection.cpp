// Problem Statement:
// Implement the selection sort algorithm to sort an array of integers.

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

class Sorting {
public:
    static void printArray(int arr[], int size) {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
 
    static void selectionSort(int arr[], int size) {
        for(int i = 0; i < size - 1; i++) {
            int smallest = i;
            for(int j = i + 1; j < size; j++) {
                if(arr[j] < arr[smallest]) {
                    smallest = j;
                }
            }
            //swap
            int temp = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
        }
    }
};

int main() {
    int arr[] = {5, 3, 8, 2, 7, 1, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
 
    Sorting::selectionSort(arr, size);
    Sorting::printArray(arr, size);

    return 0;
}
