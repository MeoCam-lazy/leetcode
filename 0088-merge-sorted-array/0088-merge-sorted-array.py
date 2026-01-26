class Solution(object):
    def merge(self, nums1, m, nums2, n):
        for i in range(3, len(nums1)+1):
            nums1[i] = nums2[i-m]
        nums1.sort()
        