package day3;

// Given a string, find the length of the longest palindromic subsequence (LPS).
public class LPS {
    public static int palindromeSeq(String s) {
        int n = s.length();
        int[][] dp = new int[n][n];
        
        for (int i = n - 1; i >= 0; i--) {
            dp[i][i] = 1;
            for (int j = i + 1; j < n; j++) {
                if (s.charAt(i) == s.charAt(j)) {
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                } else {
                    dp[i][j] = Math.max(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[0][n - 1];
    }
    
    public static void main(String[] args) {
        String s = "BBABCBCAB";
        int length = palindromeSeq(s);
        System.out.println("Length of LPS: " + length);
    }
}