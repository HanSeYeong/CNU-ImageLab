class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        l = len(nums)
        t = 1
        r = 1
        output = [1]*l
        for i in range(l-1) :
            #toward
            t *= nums[i]
            #reverse
            r *= nums[(l-1)-i]
            output[i+1] *= t
            output[l-2-i] *= r
        return output
