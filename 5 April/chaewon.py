class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        benefit = 0
        if prices == []:
            return benefit

        a = prices.pop(0)
        while prices:
            b = prices.pop(0)
            if a < b:
                benefit += b - a
            a = b
        return benefit