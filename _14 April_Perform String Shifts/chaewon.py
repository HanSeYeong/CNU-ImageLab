class Solution(object):
    def stringShift(self, s, shift):
        """
        :type s: str
        :type shift: List[List[int]]
        :rtype: str
        """
        count = 0
        L = len(s)
        for a,b in shift:
            if a:
                count += b
            else:
                count -= b
        count = count % L
        return s[-count:] + s[:-count]