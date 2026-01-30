class Solution {
public:
    bool divisorGame(int n) {
        vector<bool> dp(n+1);
        dp[1] = false;
        dp[2] = true;
        for(int i = 3; i <= n; i++){
            dp[i] = !dp[i-1];
        }
        return dp[n];
    }
};