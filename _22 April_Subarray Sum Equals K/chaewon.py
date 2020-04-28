class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        L = len(nums)
        count = 0
        sm_arr =[nums[0]]
        for i in range(1,L):
            sm_arr.append(sm_arr[-1] + nums[i])
        while sm_arr:
            buf = sm_arr.pop(0)
            if buf ==k:
                count +=1
            for i in sm_arr:
                if i-buf == k:
                    count+=1
        return count

        
