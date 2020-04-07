class Solution(object):
    def maxSubArray(self, nums):
        max_sum = nums[0]
        max_ending_here = 0

        for i in range(len(nums)): 
            max_ending_here = max_ending_here + nums[i] 
            if (max_sum < max_ending_here): 
                max_sum = max_ending_here 
            if max_ending_here < 0: 
                max_ending_here = 0 
            print(max_sum,max_ending_here)
        return max_sum 
        
#출처 : https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
