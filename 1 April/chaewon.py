class Solution(object):
    def singleNumber(self, nums):
        nums.sort()
        c = nums.pop(0)
        while nums:
            a = nums.pop()
            b = nums.pop()
            if a != b:
                return a
        return c
