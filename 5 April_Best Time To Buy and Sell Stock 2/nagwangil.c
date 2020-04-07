
int maxProfit(int* prices, int pricesSize)
{
	int max_profit = 0;
	for (int i = 1; i < pricesSize; i++)
	{
		if(prices[i] > prices[i-1] )
		{
			max_profit +=prices[i]- prices[i - 1];
		}
	}

	return max_profit;
}


