class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        diff = 0
        for i in range(1,len(prices)) :
            if (prices[i] > prices[i-1]):
                diff = diff + prices[i] - prices[i-1]
        return diff
