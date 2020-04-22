class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if nums == []:
            return -1
        L = len(nums)
        front = nums[0]
        end = nums[-1]
        if front <= target:
            for i in range(L):
                if nums[i] == target:
                    return i
                if i == L-1:
                    return -1
        elif end >= target:
            for i in range(L-1,-1,-1):
                if nums[i] == target:
                    return i
                if i == 0:
                    return -1
            return len(nums) - end -1
        else :
            return -1
