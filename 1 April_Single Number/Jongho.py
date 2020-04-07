class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # 추가 할당을 받지 않으면서
        # 시간복잡도는  o 
        
        uniqe_number = list(set(nums))
        max_nums = len(nums)
        sum_u = 0
        sum_n = 0
        for array_number in range(max_nums) :
            if (array_number+1) % 2 == 1 :
                sum_u += uniqe_number[(array_number)/2]
            sum_n += nums[array_number]
        return(sum_u*2 - sum_n)
            
