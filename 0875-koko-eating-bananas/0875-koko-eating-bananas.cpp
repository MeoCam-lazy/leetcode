class Solution {
public:
/*
@Problem summary
-You are give an array piles (each pile in the array store a specific number of bananas) and a H hours
- Your mission is to return the MINIMUM K bananas-per-hour eating speed so that Koko can eat all bananas within H hours, note that each time if the pile has less than K bananas, she eats all of them instead and will not eat anymore during that hour!
@Approach
- It's clear to see that if we pick a random larger number (larger than max of piles), the monkey can absolutely eat all bananas within H hours, but the problem description say we must return the MINIMUM K value
- But how do we find the smallest possible result? Use binary search with lowest value = 1 and highest value = max(piles)
@Implementation
- We will declare two varibles lo = 1 and hi = max(piles) and a while loop to find the best ans. In the loop, each time a value <mid> is satisfied, then we set hi = mid - 1 else lo = mid + 1
- And we also need to create a helper function determine if the K value we find on each loop is satisfied or not!
*/
    bool canEat(vector<int>&piles, int h, int k){
        long long totalHours = 0;
        for(int pile: piles){
            totalHours += ceil((double)(pile)/k);
        }
        return totalHours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo =1, hi = piles[0];
        for(int pile: piles){
            hi = max(hi,pile);
        }
        int ans = hi;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(canEat(piles,h,mid)){
                ans = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        return ans;
    }
};