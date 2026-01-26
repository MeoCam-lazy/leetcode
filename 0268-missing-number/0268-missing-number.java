class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sum_i = n*(n+1)/2;
        for(int i = 0; i < n; i++){
            sum_i -= nums[i];
        }
        return sum_i;
    }
}