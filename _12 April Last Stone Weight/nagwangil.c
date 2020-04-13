int lastStoneWeight(int* stones, int stonesSize) {
	
	int firstplace = 0;
	int secondplace = 0;

    if (stonesSize == 1)
	{
		return stones[0];
	}

	

	while(true)
	{
		firstplace = -1;
		secondplace = -1;

		for (int i = 0; i < stonesSize; i++)
		{
			if (firstplace==-1||stones[firstplace] < stones[i])
			{

				secondplace = firstplace;
				firstplace = i;
			
				


			}
			else if (secondplace==-1||stones[secondplace] < stones[i])
			{
				secondplace = i;
				
			}
		}
		



		if (stones[firstplace] > stones[secondplace]&& stones[secondplace]!=0)
		{
			
			stones[firstplace] = stones[firstplace] - stones[secondplace];
			stones[secondplace] = 0;
			



		}
		else if (stones[firstplace] == stones[secondplace]&& stones[firstplace]>0 && stones[secondplace]>0)
		{
			
			stones[firstplace] = 0;
			stones[secondplace] = 0;
		}
		else if (stones[secondplace]==0)
		{
			
			return stones[firstplace];
		}

	

	


	}

}
