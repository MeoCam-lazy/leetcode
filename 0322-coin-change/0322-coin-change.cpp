class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        /*@problem summary:
        - You are given an integer array /coins/ representing coins of different denominations and an integer /amount/ 
        - Your mission is to return the fewest number of coins that you need to make up that amount, note that assume you have countless amount of coins
        @Approach:
        It's easy to see that the minimum number of coins of any amount is the sum of minimum number of coins smaller than itself. Once we add 1 different denominations money, the minimum number of coin must be the sum of 1(itself) and sum_mini_amount[amount-that denominations]
        */
        
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (i >= coin) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }

        return (dp[amount] > amount) ? -1 : dp[amount];
    }
};