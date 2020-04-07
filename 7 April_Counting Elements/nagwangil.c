int countElements(int* arr, int arrSize) {
	
	int output = 0;
	int* countArr = (int*)malloc(sizeof(int) * (arrSize+1));
	int* linedArr = (int*)malloc(sizeof(int) * (arrSize+1));
	for (int i = 0; i < arrSize; i++)
	{
		countArr[i] = 0;
		linedArr[i] = arr[i];
	}
	for (int i = 0; i < arrSize; i++)
	{
		for (int j = i+1; j < arrSize; j++)
		{
			if (linedArr[i] > linedArr[j])
			{
				int temp = linedArr[i];
				linedArr[i] = linedArr[j];
				linedArr[j] = temp;
			}

		}
	}

	/*for (int j = 0; j < arrSize; j++)
	{
		printf("%d ", arr[j]);
	}*/
	//printf("\n");
	/*for (int j = 0; j < arrSize; j++)
	{
		printf("%d ", linedArr[j]);
	}*/
	//printf("\n");
	for (int i = 0; i < arrSize; i++)
	{
		//printf("추가할거야 :%d\n", arr[i]);
		for (int j = 0; j < arrSize; j++)
		{
			if (arr[i]== linedArr[j])
			{
				//printf("%d가  %d있다 갯수 행렬에 추가 \n ", arr[i], j);
				countArr[j]++;
			}

		}
	}

	for (int j = 0; j < arrSize; j++)
	{
		if (countArr[j] != 0 && countArr[j + 1] > 0)
		{
			if (linedArr[j + 1] - linedArr[j] == 1)
			{
				output += countArr[j];
			}
		}
	}
	//printf("출력 : %d", output);

    
	free(countArr);
	free(linedArr);

	return output;

}
