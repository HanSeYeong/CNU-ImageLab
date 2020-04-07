
bool isHappy(int n)
{
    int numsize = 1;
    int temp = 0;
    int count = 0;
    bool isOne = 0;

    static int arr[1000] = { 0 };
   

  

    printf("%d\n", n);
    while (n != 0) //입력
    {
        temp += pow(n % 10, 2);
        printf("temp = %d \n", temp);

        n = n / 10;
    }
    printf("입력끝 \n");



    if (temp == 1) // 1일때 종료
    {
       
        isOne = true;
       
    }
    else 
    {
        
        for (int i = 0; i < 100; i++)
        {
            printf("%d %d \n", arr[i], temp);
            if (temp == arr[i])
            {
                printf("안에 있다 \n");
                return false;
            }
            else if (arr[i] == 0)
            {
                count = i;
                break;
            }
        }

        for (int i = 0; i < 100; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        arr[count] = temp;
        printf("%d\n", arr[count]);
        printf("계속\n");
        isOne = isHappy(temp);
    }
    
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] != 0)
            arr[i] = 0;
        else break;
    }
  
    return isOne;
}

