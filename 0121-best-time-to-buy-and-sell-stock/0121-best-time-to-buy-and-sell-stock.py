class Solution(object):
    def maxProfit(self, prices):
        min_val = prices[0]
        max_profit = 0
        for i in prices:
            min_val = min_val if i > min_val else i
            max_profit = max_profit if max_profit > i - min_val else i - min_val
        return max_profit
        