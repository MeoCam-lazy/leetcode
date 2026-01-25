class Solution {
    public int maxProfit(int[] prices) {
        int min_val = prices[0];
        int max_profit = 0;
        for(int i = 0; i < prices.length; i++){
            min_val = (min_val < prices[i])?min_val:prices[i];
            max_profit = (max_profit > prices[i] - min_val)?max_profit: prices[i] - min_val;
        }
        return max_profit;
    }
}