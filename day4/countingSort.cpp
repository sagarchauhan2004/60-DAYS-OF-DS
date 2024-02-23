/*
1. Problem: Counting Sort Implementation

Problem Statement:
Implement the counting sort algorithm to sort an array of integers.

Input:
An array of integers.

Output:
The sorted array.

Example:
Input:
[5, 3, 8, 2, 7, 1, 6, 4]
Output:
[1, 2, 3, 4, 5, 6, 7, 8]

*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void countingSort(vector<int>& arr) {
    int max = *max_element(arr.begin(), arr.end());
    vector<int> count(max + 1, 0);
    
    for (int num : arr) {
        ++count[num];
    }

    int index = 0;
    for (int i = 0; i < count.size(); ++i) {
        while (count[i] > 0) {
            arr[index++] = i;
            --count[i];
        }
    }
}

int main() {
    vector<int> arr = {5, 3, 8, 2, 7, 1, 6, 4};
    countingSort(arr);

    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
