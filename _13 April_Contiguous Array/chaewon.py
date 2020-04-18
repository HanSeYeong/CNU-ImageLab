class Solution(object):
    def findMaxLength(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        D = {0 : -1}
        M = 0
        sum = 0
        for index, i in enumerate(nums):
            if i:
                sum+=1
            else:
                sum -=1
            
            if sum in D:
                a = D[sum]
                if index - a > M:
                    M = index - a
            else:
                D[sum] = index
        return M
         
