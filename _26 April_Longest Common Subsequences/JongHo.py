class Solution(object):
    def longestCommonSubsequence(self, text1, text2):
        """
        :type text1: str
        :type text2: str
        :rtype: int
        """
        prev = [0]*len(text1)
        for i,r in enumerate(text1):
            current = []
            for j,c in enumerate(text2):
                if r==c:
                    e = prev[j-1]+1 if i* j > 0 else 1
                else:
                    e = max(prev[j] if i > 0 else 0, current[-1] if j > 0 else 0)
                current.append(e)
            prev = current
        return current[-1]

#[출처] [Python] LCS 알고리즘(Longest Common Subsequence)|작성자 히니즈

