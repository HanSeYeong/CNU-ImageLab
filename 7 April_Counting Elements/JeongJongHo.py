def isanothere(e,array):
    s = 0
    for i in array :
        if i == e:
            s = s + 1 
    return (s-1)

class Solution(object):
    def countElements(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        c = 0
        ar2 = list(set(arr))
        
        for i in range(0,len(ar2)-1):
            if ar2[i+1] - ar2[i] == 1:
                c = c + 1
                n = isanothere(ar2[i],arr)
                if n > 0 :
                    c = c + n
        
        return c
