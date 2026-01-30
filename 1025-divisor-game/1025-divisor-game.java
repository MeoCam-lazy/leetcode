class Solution {
    public boolean divisorGame(int n) {
        if(n <= 1) return false;
        boolean[] dp = new boolean[n+1];
        dp[1] = false;
        dp[2] = true;
        for(int i = 3; i <= n; i++){
            dp[i] = !dp[i-1];
        }
        return dp[n];
    }
}