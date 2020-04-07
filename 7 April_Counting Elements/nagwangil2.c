int countElements(int* arr, int arrSize) {
	
	int output = 0;
	int count = 1;
	for (int i = 0; i < arrSize; i++)
	{
		for (int j = i; j < arrSize; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}

	for (int i = 0; i < arrSize; i++)
	{
		if (i == arrSize)
		{
			break;
		}
		else if (arr[i] == arr[i + 1])
		{
			count++;
		}
		else if (arr[i] + 1 == arr[i + 1])
		{
			output += count;
			count = 1;
		}
		else
			count = 1;
	}

	printf("출력 :  %d", output);
	return output;

}
