class Solution(object):
    def findMaxLength(self, nums):
        dic = {}
        s = 0
        mx = 0
        last_ind = 0
        for i in range(0,len(nums)):
            s += nums[i]
            d = i-2*s + 1
            if d == 0 :
                mx = i + 1
                last_ind = i
            if d in dic:
                if mx < i-dic[d]:
                    mx = i-dic[d]
                    last_ind = i
            else :
                dic[d] = i
        return mx
