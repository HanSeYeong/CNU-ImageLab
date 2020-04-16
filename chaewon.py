class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        L = len(nums)
        front = [1]

        for i in range(L - 1):
            front.append(front[i] * nums[i])
        p = 1
        for i in range(1, L):
            p *= nums[-i]
            front[-i - 1] *= p
        return front
