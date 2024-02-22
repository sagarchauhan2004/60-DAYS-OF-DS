// Problem Statement:
// Given two strings, find the length of the longest common subsequence (LCS).

// Input:
// Two strings.

// Output:
// The length of the longest common subsequence.

// Example:
// Input:
// String 1: "ABCBDAB"
// String 2: "BDCAB"
// Output:
// Length of LCS: 4

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int longestCommonSubsequenceLength(string str1, string str2) {
    int m = str1.length();
    int n = str2.length();

    // Create a table to store lengths of LCS
    // Initialize all values to 0
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill dp table in bottom-up manner
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    string str1 = "ABCBDAB";
    string str2 = "BDCAB";
    cout << "Length of LCS: " << longestCommonSubsequenceLength(str1, str2) << endl;
    
    return 0;
}
