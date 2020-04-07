class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        # 0번부터 시작
        place = 0
        for i in range(len(nums)) :
            if (nums[i] != 0) :
                nums[place] = nums[i]
                if place != i :
                    nums[i] = 0
                place += 1
            
