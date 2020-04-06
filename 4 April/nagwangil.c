
void moveZeroes(int* nums, int numsSize) {

	int ZeroCount = 0;

	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == 0)
		{
			ZeroCount++;

		}
		else
		{
			int temp = nums[i-ZeroCount];
			nums[i - ZeroCount] = nums[i];
			nums[i] = temp;
		}

	}




}

