class Solution {
    public int nthUglyNumber(int n) {
        int[] dp = new int[n+1];
        dp[1] = 1;
        int p2 = 1, p3 = 1, p5 = 1;
        for(int i = 2; i <= n; i++){
            int nextP2 = dp[p2]*2;
            int nextP3 = dp[p3]*3;
            int nextP5 = dp[p5]*5;
            dp[i] = Math.min(nextP2, Math.min(nextP3, nextP5));
            if(dp[i] == nextP2) p2++;
            if(dp[i] == nextP3) p3++;
            if(dp[i] == nextP5) p5++;
        }
        return dp[n];
    }
}