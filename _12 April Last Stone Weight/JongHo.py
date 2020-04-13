class Solution(object):
    def find_max_value(self,array):
        if len(array) == 0:
            return 0,-1,0,-1
        mx = 0
        mxi = 0
        if len(array) == 1:
            return mx,0,0,-1
        mx_2 = 0
        mxi_2 = 1
        for j,i in enumerate(array):
            if mx_2 < i :
                if mx < i :
                    mx_2 = mx
                    mxi_2 = mxi
                    mx = i
                    mxi = j
                else :
                    mx_2 = i
                    mxi_2 = j
        return mx,mxi,mx_2,mxi_2
        
    def lastStoneWeight(self, stones):
        while len(stones) > 1:
            print(stones)
            num1,index1,num2,index2 = self.find_max_value(stones)
            print(num1,index1,num2,index2)
            if num1 == num2 :
                del stones[index1]
                del stones[index2-1]
            elif num1 > num2 :
                stones[index2] = num1-num2
                del stones[index1]
        if len(stones) == 0:
            return 0
        else :
            return stones[0]
            
        
