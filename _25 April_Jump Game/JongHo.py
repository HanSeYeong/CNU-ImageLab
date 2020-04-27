class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        stamina = nums[0]
        if len(nums) == 1 :
            return True
        if stamina == 0 :
            return False
        c = 1
        l = len(nums) - 1
        while stamina > 0 and c < l :
            if nums[c] >= stamina :
                stamina = nums[c]
            else :
                stamina -= 1
            if stamina <= 0 :
                break
            c += 1
            #print(stamina)
        #print(c,l)
        if c == l :
            return True
        else :
            return False
