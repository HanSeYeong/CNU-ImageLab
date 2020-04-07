

int OnlyNegative(int* nums, int numsSize)
{
    int temp = nums[0];
    for (int i = 0; i < numsSize; i++)
    {
        if(temp < nums[i])
        {
            temp = nums[i];
        }
    }
    return temp;

}

int setpositive(int * positiveArr, int* nums ,int  numsSize)
{
    int temp = 0;
    for (int i = 0; i < numsSize; i++)
    {
       
        if (nums[i] > 0)
        {
            positiveArr[temp] = i;
            temp++;
        }
        
    }
  
   /* printf("양수 갯수 %d \n" ,temp);*/
    return temp;
}

int getArraySum(int* nums, int start, int end)
{
    int temp = 0;
    for (int i = start; i <= end; i++)
    {
        //printf("nums[i] : %d \n", nums[i]);
        temp += nums[i];
    }
    //printf("배열의 합: %d 시작 : %d 끝 : %d\n", temp, start , end);

    return temp;
}

int maxSubArray(int* nums, int numsSize)
{

   
    int* positiveArr = (int*)malloc(sizeof(int) * numsSize);
  

    int positiveRange = setpositive(positiveArr, nums, numsSize);
    int maxnum = 0;
   

    
   /* for (int i = 0; i < positiveRange; i++)
    {

        printf("%d ", positiveArr[i]);
    }*/
   /* printf("%d", positiveRange);*/

    if (positiveRange == 0)
    {
        maxnum = OnlyNegative(nums, numsSize);
    }
    for (int i = 0; i < positiveRange;i++)
    {
        int sum = 0;
       /* printf("%d 부터 시작\n", positiveArr[i]);*/
        int isfirst = 0;
        int temp = 0;
        int start = i;
        for (int j = i; j < positiveRange; j++)
        {
          
            int end = j;

             
           /* printf("시작 :%d  끝:%d\n", positiveArr[start], positiveArr[end]);*/
           
           
            temp = getArraySum(nums, positiveArr[start], positiveArr[end]);

            if (start == end == j)
            {
                sum = temp;
            }
            else
                sum += temp;

           /* printf("계산값 : %d\n", sum);*/


            if (sum > maxnum)
            {
                maxnum = sum;
            }
            if (isfirst==0)
            {
              /*  printf("처음 중복 없애기 \n");*/
                sum = 0;
                isfirst++;
            }
            else {
               sum-= nums[positiveArr[end]];
            }
           

            start = j;
           /* printf("\n");*/
        }
    }
   
        


   
    return maxnum;
}
