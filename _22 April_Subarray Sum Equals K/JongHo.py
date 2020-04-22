class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        #0부터 n까지 더한다.
        s_nums = nums[:]
        d = {}
        s = 0
        r = 0
        for i,j in enumerate(nums)  :
            s += j
            s_nums[i] = s
            if s_nums[i] == k :
                r += 1
            # s_nums[i] 의 뒷 부분 원소에
            # s_nums[i]+k 가 존재할 경우, 값이 존재
            if s_nums[i]-k in d :
                r += d[s_nums[i]-k]
            if s_nums[i] in d :
                d[s_nums[i]] += 1
            else :
                d[s_nums[i]] = 1
            
        print(d)
        return r
