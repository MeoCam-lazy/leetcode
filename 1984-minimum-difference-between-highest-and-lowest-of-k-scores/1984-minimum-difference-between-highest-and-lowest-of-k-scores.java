class Solution {
    public int minimumDifference(int[] nums, int k) {
        if(k <= 1) return 0;
        int mins = Integer.MAX_VALUE;
        Arrays.sort(nums);
        for(int i = 0; i <= nums.length-k; i++){
            mins = Math.min(mins,nums[i+k-1]- nums[i]);
        }
        return mins;
    }
}