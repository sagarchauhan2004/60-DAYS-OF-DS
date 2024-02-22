3. Problem: Longest Palindromic Subsequence (LPS)

Problem Statement:
Given a string, find the length of the longest palindromic subsequence (LPS).

Input:
A string.

Output:
The length of the longest palindromic subsequence.

Example:
Input:
String: "BBABCBCAB"
Output:
Length of LPS: 7 
    
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int longestPalindromeSubsequenceLength(string s) {
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = n - 1; i >= 0; i--) {
        dp[i][i] = 1;
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[0][n - 1];
}

int main() {
    string s = "BBABCBCAB";
    int length = longestPalindromeSubsequenceLength(s);
    cout << "Length of LPS: " << length << endl;

    return 0;
}
