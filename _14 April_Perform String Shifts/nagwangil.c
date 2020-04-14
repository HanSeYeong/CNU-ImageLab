char* stringShift(char * s, int** shift, int shiftSize, int* shiftColSize){
    char *shifted= (char*)malloc(sizeof(char)*(strlen(s)+1));
   int direction =1;
    
   // printf("%d", shift[0][1]);
  
    for(int i = 0; i < shiftSize;i++)
    {
        int command =shift[i][0];
        int direction =1;
        
        printf("%d\n",command);
       if(command==0) 
           direction *=-1;
        
        for(int j = 0; j <strlen(s); j++)
        {
            int temp = j+ direction*shift[i][1];
            if(temp >= 0)
            {
                temp %=strlen(s);
                printf("%d to %d\n",j ,temp);
            }
            else if( temp<0)
            {
                temp = temp%strlen(s) + strlen(s)-1 ;
                printf("%d to %d\n",j ,temp);
            }
            
            
            // char a= s[j];
            // s[j]=s[temp];
            // s[temp]= a;
          //  char* a= (char*)malloc(sizeof(char)*2);
            
            shifted[j]= s[temp];
             
            }
    }
      for(int i = 0; i<strlen(s); i++)
     {printf("%c",s[i]);}
    
    
    printf("123123\n");
      printf("%s",shifted);
    return (char*)&shifted ;
    

}
