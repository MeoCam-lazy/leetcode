class Solution(object):
    def minCostClimbingStairs(self, cost):
        min_cost = []
        min_cost.append(cost[0])
        min_cost.append(cost[1])
        for i in range(2, len(cost)):
            min_cost.append(min(min_cost[i-1]+cost[i],min_cost[i-2]+cost[i]))
        n = len(cost)-1
        return min(min_cost[n],min_cost[n-1])
        