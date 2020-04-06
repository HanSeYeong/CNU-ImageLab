class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        Gap = []

        if len(nums) == 1:
            return nums[0]
        for i in range(len(nums) - 1):
            Gap.append(nums[i + 1] + nums[i])
        print(Gap)
        print(nums)
        M = max(nums)
        sum = -999999
        count = 1
        while Gap:
            buffer = Gap.pop(0)
            if buffer > 0:
                sum += nums[count]
            else:
                if M < sum:
                    M = sum
                sum = -99999
            count += 1
        return M
