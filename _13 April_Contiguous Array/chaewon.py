class Solution(object):
    def findMaxLength(self, nums):
        L = len(nums)
        bf = nums[0]
        if bf == 0:
            bf = -1
        Arr = [bf]
        mx = -999
        for i in range(1, L):
            bf = nums[i]
            if bf == 0:
                bf = -1
            Arr.append(Arr[-1] + bf)
            for j, v in enumerate(Arr):
                if v == Arr[-1]:
                    mx = max(mx, i - j)
                    break
        return mx