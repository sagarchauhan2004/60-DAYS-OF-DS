/*
3. Problem: Longest Common Subsequence with Binary Search

Problem Statement:
Given two sorted arrays, find the length of the longest common subsequence (LCS) using binary search.

Input:
Two sorted arrays.

Output:
The length of the longest common subsequence.

Example:
Input:
Array 1: [1, 3, 5, 7, 9]
Array 2: [3, 5, 8, 9, 10]
Output:
Length of LCS: 3 (LCS: [3, 5, 9])
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to perform binary search on array arr for element x
bool binarySearch(const vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return true;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

// Function to find the length of the longest common subsequence using binary search
int longestCommonSubsequenceLength(const vector<int>& arr1, const vector<int>& arr2) {
    int m = arr1.size();
    int n = arr2.size();
    
    vector<int> dp(n, 0);

    for (int i = 0; i < m; i++) {
        int prev = 0;
        for (int j = 0; j < n; j++) {
            int temp = dp[j];
            if (arr1[i] == arr2[j]) {
                dp[j] = prev + 1;
            } else {
                if (j > 0)
                    dp[j] = max(dp[j], dp[j - 1]);
            }
            prev = temp;
        }
    }

    return dp[n - 1];
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {3, 5, 8, 9, 10};

    // Sorting arr2 to perform binary search
    sort(arr2.begin(), arr2.end());

    int lcsLength = longestCommonSubsequenceLength(arr1, arr2);
    
    cout << "Length of LCS: " << lcsLength << endl;

    return 0;
}
