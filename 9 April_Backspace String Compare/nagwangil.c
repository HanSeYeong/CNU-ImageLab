
typedef struct stack {
    char c;
    struct stack* under;
}Stack;

Stack* CreateStack(char c)
{
    if (c == '#')
        return NULL;
    Stack* temp = malloc(sizeof(Stack));
    temp->c = c;
    
    temp->under = NULL;
    
    return temp;
}




Stack* addStack(Stack* top, char* c)
{
    Stack* temp = CreateStack(c);
    temp->under = top;
    return temp;

}
Stack* Pop(Stack* top)
{
    Stack* temp = top->under;
    return temp;
}

bool backspaceCompare(char* S, char* T) {
    int i = 0;
    char stack[200];
    char stack2[200];
    int top = 0;
    while (S[i] != '\0') {
        if (S[i] == '#') {
            (top > 0) ? top-- : 0;
        }
        else {
            stack[top++] = S[i];
        }
        i++;
    }
    stack[top] = '\0';
    top = 0;
    i = 0;
    while (T[i] != '\0') {
        if (T[i] == '#') {
            (top > 0) ? top-- : 0;
        }
        else {
            stack2[top++] = T[i];
        }
        i++;
    }
    stack2[top] = '\0';
    return !strcmp(stack, stack2);
}


0ms   6.8
-----------------------------------------------------------------------------------------------------------------------
bool backspaceCompare(char* S, char* T) {

    Stack* Stemp = CreateStack(S[0]);
    Stack* Ttemp = CreateStack(T[0]);
   
    for (int i = 1; i < strlen(S); i++)
    {
        if (S[i] == NULL)
            break;
        else if (S[i] != '#')
        {
          
            printf("%c 추가\n", S[i]);
            Stemp = addStack(Stemp, S[i]);
        }
        else {
            printf("제거 \n");
           if(Stemp!=NULL)
               Stemp = Pop(Stemp);
        }
    }

    for (int i = 1; i < strlen(T); i++)
    {
        if (T[i] == NULL)
            break;
        else if (T[i] != '#')
        {
            printf("%c 추가\n", T[i]);
            Ttemp = addStack(Ttemp, T[i]);
        }
        else
        {
            printf("제거 \n");
            if (Ttemp != NULL)
             Ttemp = Pop(Ttemp);
        }

    }
    printf("\n\n");
    while (1)
    {
        if (Ttemp != NULL && Stemp != NULL)
        {
            if (Ttemp->c == Stemp->c)
            {
                printf("같다 \n");
                Ttemp = Ttemp->under;
                Stemp = Stemp->under;
                continue;
            }
            else
            {
                free(Stemp);
                free(Ttemp);
                return false;
            }
        }
        else if (Ttemp == NULL || Stemp == NULL)
        {
            if (Ttemp == NULL && Stemp == NULL)//같이 끝났다
            {
                printf("길이가 끝났다\n");
                break;
            }
            else//둘중하나 길이가 짧다
            {
                printf("둘중하나 짧다");
                free(Stemp);
                free(Ttemp);
                return false;
            }
        }

    }







    free(Stemp);
    free(Ttemp);

    return true;
}


0ms   5.6
--------------------------------------------------------------------------------------------------------






bool backspaceCompare(char* S, char* T) {
    int Slength = strlen(S);
    int Tlength = strlen(T);
    int Tcount = 0;
    int Scount = 0;
    printf("%d, %d\n", Slength, Tlength);
    while (1)
    {

        //printf("while문 시작\n");

        if (S[Slength] == '#')
        {
            printf("S가 #이다\n");
            Scount++;
        }
        if (T[Tlength] == '#')
        {
            printf("T가 #이다\n");
            Tcount++;
        }

        // printf("여기까진될거같은데 \n");
        if (Tcount == 0 && Scount == 0)
        {
            printf("비교할 때이다 %d, %d\n", Slength, Tlength);
            if (S[Slength] == T[Tlength])
            {
                if (Slength < 0 && Tlength < 0)
                {
                    //printf("참");
                    break;
                }
                printf("두개가 같아서 계속 비교한다 %d, %d\n", Slength, Tlength);
                Slength--;
                Tlength--;
                if (Slength < 0)
                    Slength = -2;
                if (Tlength < 0)
                    Tlength = -2;
                if (Slength == -2 && Tlength == -2)
                {
                    //printf("끝까지 왔으면 같은거지 ! \n");
                    break;
                }
                continue;
            }
            else {
                // printf("거짓\n");
                return false;
            }
        }

        if (Scount > 0 && S[Slength] != '#')//#카운트가 0인데 알파벳이면 삭제 연산한거
        {
            printf("S삭제 %c, %d\n", S[Slength], Slength);
            Scount--;
        }
        if (Tcount > 0 && T[Tlength] != '#')
        {
            printf("T삭제 %c , %d\n", T[Tlength], Tlength);
            Tcount--;
        }



        if (Slength == 0 && Tlength == 0)
        {
            //printf("끝까지 왔으면 같은거지 ! \n");
            break;
        }
        Slength--;
        Tlength--;
        if (Slength < 0)
            Slength = -2;
        if (Tlength < 0)
            Tlength = -2;

    }

    return true;


}

???
