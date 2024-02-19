package day2;
// Given two strings, find the length of the longest common subsequence (LCS).
public class strLCS {
        public static int longestCommonSubsequenceLength(String str1, String str2) {
            int m = str1.length();
            int n = str2.length();
    
            // Create a table to store lengths of LCS
            // Initialize all values to 0
            int[][] dp = new int[m + 1][n + 1];
    
            // Fill dp table in bottom-up manner
            for (int i = 1; i <= m; i++) {
                for (int j = 1; j <= n; j++) {
                    if (str1.charAt(i - 1) == str2.charAt(j - 1)) {
                        dp[i][j] = dp[i - 1][j - 1] + 1;
                    } else {
                        dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
                    }
                }
            }
    
            return dp[m][n];
        }
    
        public static void main(String[] args) {
            String str1 = "ABCBDAB";
            String str2 = "BDCAB";
            System.out.println("Length of LCS: " + longestCommonSubsequenceLength(str1, str2));
        }

    
}
