class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> mini_cost;
        mini_cost.push_back(cost[0]);
        mini_cost.push_back(cost[1]);
        for(int i = 2; i < cost.size(); i++){
            int minx = min(mini_cost[i-1]+cost[i],mini_cost[i-2]+cost[i]);
            mini_cost.push_back(minx);
        }
        int n = cost.size()-1;
        return min(mini_cost[n],mini_cost[n-1]);
    }
};