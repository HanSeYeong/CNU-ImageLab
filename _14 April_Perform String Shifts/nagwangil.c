char* stringShift(char * s, int** shift, int shiftSize, int* shiftColSize){
    char *shifted= (char*)malloc(sizeof(char)*(strlen(s)+1));
   int direction =1;
    strcpy(shifted, s);
   // printf("%d", shift[0][1]);
  printf("shiftsize : %d\n\n",shiftSize);
    for(int i = 0; i < shiftSize;i++)
    {printf("times : %d\n\n",i);
     printf("command : %d\n\n",shift[i][1]);
        int command =shift[i][0];
        int direction =1;
        
       // printf("%d\n",command);
       if(command==0) 
           direction *=-1;
        
        for(int j = 0; j <strlen(s); j++)
        {
            int temp = j+ direction*shift[i][1];
            if(temp >= 0)
            {
                temp %=strlen(s);
              //  printf("%d to %d\n",j ,temp);
            }
            else if( temp<0)
            {
                temp = temp%strlen(s) + strlen(s)-1 ;
           //     printf("%d to %d\n",j ,temp);
            }
          //  printf("j m temp  %d, %d\n\n",j,temp);
            
            shifted[temp] =s[j];
            
//              printf("%c to %c\n", a,shifted[j]);
//              printf("%c to %c\n", shifted[j],shifted[temp]);
//              printf("%c to %c\n", shifted[temp],a);
            
            
            
           
            
            
            
            
//             strcpy(a, shifted[j]);
//             strcpy(shifted[j],shifted[temp]);
//             strcpy(shifted[temp],a );
            
          //  char* a= (char*)malloc(sizeof(char)*2);
            
            
             
            }
         printf("%s\n",shifted);
    
        strcpy(s,shifted);
 
     printf("shifted s :%s\n  s length = %d\n",s, sizeof(s));
     
    }
     shifted[strlen(s)+1] = '\0';
      for(int i = 0; i<strlen(s); i++)
     {printf("%c",s[i]);}
    
    
   // printf("123123\n");
      //printf("%s",shifted);
    
    return shifted ;
    

}
