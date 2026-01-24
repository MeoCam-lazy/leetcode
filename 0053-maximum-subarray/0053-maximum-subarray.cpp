class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tempSum = 0;
        int maxSum = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            tempSum = max(tempSum + nums[i], nums[i]);
            maxSum = max(maxSum,tempSum);
        }
        return maxSum;
    }
};