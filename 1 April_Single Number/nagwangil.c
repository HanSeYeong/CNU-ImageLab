

int singleNumber(int* nums, int numsSize){
    
      for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[i] == nums[j] && i != j)
            {
                
                break;
            }
            else if (nums[i] == nums[j] && i == j)
            {
                
                if (j == numsSize-1)
                {
                    return nums[i];
                }
                continue;
            }
            else if (nums[i] != nums[j] && i != j)
            {
                if (numsSize - 1 == j)
                {
                    return nums[i];
                }
             
                continue;
            }
           
        }
    }
    return 0;


}

