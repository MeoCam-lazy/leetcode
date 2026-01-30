class Solution {
    public int[] countBits(int n) {
        int[] dp = new int[n+1];
        int sub = 1;
        for(int i = 1; i <= n; i++){
            dp[i] = dp[i>>1]+(1&i);
        }
        return dp;
    }
}