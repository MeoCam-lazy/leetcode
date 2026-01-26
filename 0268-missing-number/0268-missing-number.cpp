class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = (nums.size());
        int sum_i = n*(n+1)/2;
        for(int i = 0; i < n; i++){
            sum_i -= nums[i];
        }
        return sum_i;
    }
};