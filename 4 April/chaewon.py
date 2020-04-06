class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        L = len(nums)
        zeros = []
        count = 0
        for i in range(L):
            if nums[i] == 0:
                zeros.append(i)
                count += 1
        zeros.reverse()
        for j in zeros:
            nums.pop(j)

        nums += [0] * count