class Solution(object):
    def stringShift(self, s, shift):
        """
        :type s: str
        :type shift: List[List[int]]
        :rtype: str
        """
        right = 0
        left = 0
        for i in shift :
            if i[0] == 0 :
                left += i[1]
            else :
                right += i[1]
        move = left-right
        #move가 양수면 왼쪽으로 이동 (0)
        #move가 음수면 오른쪽으로 이동 (1)
        l = len(s)
        if move < 0 :
            l *= -1
        output = ""
        move = move % l
        for i in range (len(s)) :
            k = move+i
            k = k % l
            output += s[k]
            
        return output
