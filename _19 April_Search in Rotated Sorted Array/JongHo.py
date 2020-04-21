class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if nums == [] :
            return -1
        if len(nums) == 1 and nums[0] == target :
            if nums[0] == target :
                return 0
            else :
                return -1
        result = -1
        changed = False
        if nums[0] > target :
            #print("case1")
            
            c = len(nums)-1
            
            if nums[c] == target :
                changed = True
            
            while nums[c] != target and nums[c] > target :
                changed = True
                if c == 0 :
                    if nums[c] != target :
                        c = -1
                    break
                c -= 1
            
            if changed and c <= len(nums)-1 and nums[c] == target :
                result = c
        elif nums[0] < target :
            #print("case2")
            
            c = 0
            
            if nums[c] == target :
                changed = True
                
            while nums[c] != target and nums[c] < target :
                changed = True
                if c == len(nums)-1 :
                    if nums[c] != target :
                        c = -1
                    break
                c += 1

            if changed and c >= 0 and nums[c] == target :
                result = c
        elif nums[0] == target :
            result = 0
        return result
        
