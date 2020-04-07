class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        for i in range(len(nums) - 1, -1, -1):
            if nums[i] == 0:
                nums.pop(i)
                nums.append(0)
        
