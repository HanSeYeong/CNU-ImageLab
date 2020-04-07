class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if prices == []:
            return 0
        
        profit = 0
        buy = False
        buy_profit = 0
        max_price = 0
        for i in range(len(prices) - 1):
            if prices[i] > prices[i + 1] and buy is False:
                continue
            elif prices[i] < prices[i + 1] and buy is False:
                buy_profit = prices[i]
                buy = True
            elif prices[i] > prices[i + 1] and buy is True:
                profit += (prices[i] - buy_profit)
                buy = False
                max_price = 0
            elif prices[i] < prices[i + 1] and buy is True:
                if max_price < prices[i + 1]:
                    if prices[i + 1] == prices[-1]:
                        profit += (prices[i + 1] - buy_profit)
                        buy = False
                    else:
                        max_price = prices[i + 1]
                else:
                    profit += (prices[i + 1] - buy_profit)
            print(buy_profit, buy)

        if max_price < prices[-1] and buy is True:
            profit += (prices[-1] - buy_profit)

        return profit
                
                
                
