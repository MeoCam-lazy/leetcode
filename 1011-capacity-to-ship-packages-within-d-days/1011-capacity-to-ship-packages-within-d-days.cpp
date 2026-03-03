class Solution {
public:
/*
@Problem summary:
- We are given an array weights that denotes the weight of each product, and a specific number of days X
- Our mission is to find the minimum ship capacity required to transport all products within X days
@Approach
- It is evident that we can choose very large number larger than sum of the whole weights array then we can transport all products within X days, but the problem description noted that we must return the LEAST WEIGHT CAPACITY, this requirement lead to GREEDY strategy
- Since we must return the least weight capacity, BINARY SEARCH is the best meethod to search for best answer, the answer must be in range of (largest weight product in the array and sum of every products in the array).
@Implementation
+Because we decided to use binary search, a helper function <CanShipWithinXDays> is needed to check if a limit we set is acceptable or not
+In the problem solving function, we will use two variables lo = max (weights) and hi = sum (weights), we also set a result variable = hi can change anytime 
while(lo <= hi):
    mid = lo + (hi - lo)/2
    if canship(mid):
        ans = mid
        hi = mid - 1
    else:
        lo = mid + 1
return ans
*/
    bool canShip(int x, vector<int> &weights,int days){
        int day_needed = 1;
        int temp = 0;
        for(int weight: weights){
            if(temp + weight> x){
                day_needed++;
                temp = weight;
            }
            else{
                temp += weight;
            }
        }
        return day_needed <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = 0, hi = 0;
        for(int weight: weights){
            lo = max(weight,lo);
            hi += weight;
        }
        int ans = hi;
        while(lo <= hi){
            int mid = lo + (hi - lo )/2;
            if(canShip(mid,weights,days)){
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid+1;
        }
        return ans;
    }
};