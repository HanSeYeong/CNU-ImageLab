

int InoderMax(struct TreeNode* root, int level)
{
    static int maxlevel=0;
   
    if(root!=NULL)
    { 
        
        
        if(maxlevel<level)
            {
               printf("최고값 등록 : %d\n", level);
                    maxlevel=level;
            printf("%d 최고값 확인\n",maxlevel);
            }
        
        if(root->left!=NULL)
        {
             level++;
           
            InoderMax(root->left, level);
             level--;
        }
        if(root->right!=NULL)
        { level++;
          
         if(maxlevel<level)
         {
                    maxlevel=level;
            }
            InoderMax(root->right, level);
          level--;
        }
        
    }
    int temp=0;
   if(level==1)
   {
       printf("%d 반환전 확인\n",maxlevel);
       temp = maxlevel;
       maxlevel=0;
       printf("%d 최고값 초기화\n",maxlevel);
       printf("%d 최고값 반환\n ",temp);
   }
    
    return temp;
}

// void FindLongiest(struct TreeNode* root,char* arr,int arrsize){
//     int maxlevel=0;//제일 큰 수
//     int arrcount=0;//배열 왼오 확인
//     int temp=0; // 비교하기 위해 있는수 
//     int downcount=0;//내려갈때 빼야하는 수
    
    
    
    
    
//     printf("다른 가지 찾기\n");
//     // for(int i =0 ; i < arrsize; i++)
//     // {   printf("%d", arrsize);   }
//     //  printf("\n");
    
    
//     while(true)
//         {if(root!=NULL){
            
//             if(arr[arrcount]=="l")
//             {
//                 if(root->right!=NULL)
//                 {
//                     temp =InoderMax(root->right, 0);
//                     if(maxlevel<temp+downcount)
//                     {maxlevel=temp + downcount;
//                      //  printf("현재 최고 값 :%d\n",maxlevel);}
//                 }
//             }
//             else if(arr[arrcount]=="r")
//             {
//                   if(root->left!=NULL)
//                 {
//                     temp =InoderMax(root->left, 0);
//                     if(maxlevel<temp+downcount)
//                     {

//                         maxlevel=temp + downcount;
//                        // printf("현재 최고 값 :%d\n",maxlevel);
//                     }
//                 }
//             }

//             downcount--;
    
//               if(arr[arrcount]=="l")
//             {
//                  // printf("왼족으로 넘어간다");
//                 root=root->left;
//             }
//             else if(arr[arrcount]=="r")
//             {
//                 root=root->right;
//             }else{
//                 break;
//             }
//         }


//         }
//     }
    
    
    



int InoderSearch(struct TreeNode* root, int level)
{
    static char* maxarr[5000];
    
    static char* arr[5000];
   
    static int maxlevel=0;
    int othermaxlevel=0;//제일 큰 수
    int arrcount=0;//배열 왼오 확인
    int temp=0; // 비교하기 위해 있는수 
    int downcount=0;//내려갈때 빼야하는 수
    if(root != NULL)
    {
         if(root->right==NULL && root->left ==NULL)//말단 노드일때
        {
            if(maxlevel < level)
            {
                //printf("경로 저장 \n");
                 for(int i = 0 ; i < level; i++)
                  {
                      maxarr[i]= arr[i];
                     // printf("%d ", arr[i]);
                  }
         //   printf("\n");
            
                maxlevel =level;
                
                
            //      printf("경로 저장 결과 \n");
            //      for(int i = 0 ; i < level; i++)
            //         printf("%c ", maxarr[i]);
            // printf("\n");
                
            }
        }
        if(root->left != NULL)
        {
            arr[level]="l";
            level++;
//             for(int i = 0 ; i < level; i++)
//                  printf("%c ", arr[i]);
//             printf("\n");
            
            
            
            
            InoderSearch(root-> left,level);
         level--;
        }
        //printf("%d, level : %d \n", root->val,level);
        if(root->right != NULL)
        {
            arr[level]= "r";
            level++;
            
//                 for(int i = 0 ; i < level; i++)
//                  printf("%c ", arr[i]);
//          printf("\n");
            InoderSearch(root->right, level);
            level--;
        }
        
       
        
        
        
    }
    else return 0;
     if(level ==0){
         
         
    
    printf("다른 가지 찾기\n");
    for(int i =0 ; i < maxlevel; i++)
     { //  printf("%c", maxarr[i]);   }
     printf("\n");
    
    
    while(true)
        {
        if(root!=NULL){

                if(maxarr[arrcount]=="l")
                {
                    printf("오른쪽 확인\n");

                    if(root->right!=NULL)
                    {
                        temp =InoderMax(root->right, 1);
                        if(othermaxlevel<temp+downcount)
                        {othermaxlevel=temp + downcount;
                           printf("현재 최고 값 :%d\n",othermaxlevel);}
                    }
                }
                else if(maxarr[arrcount]=="r")
                {
                      if(root->left!=NULL)
                    {
                          printf("왼쪽 확인\n");
                        temp =InoderMax(root->left, 1);
                        if(othermaxlevel<temp+downcount)
                        {

                            othermaxlevel=temp + downcount;
                            printf("현재 최고 값 :%d\n",othermaxlevel);
                        }
                    }
                }

                downcount--;

                  if(maxarr[arrcount]=="l")
                {
                    printf("왼족으로 넘어간다\n");
                    root=root->left;
                      arrcount++;
                }
                else if(maxarr[arrcount]=="r")
                {
                    printf("오른쪽으로 넘어간다\n");
                    root=root->right;
                    arrcount++;
                }else{
                   printf("끝\n");
                    break;
                }
            }


            }



             temp=maxlevel + othermaxlevel;

             for(int i = 0; i < maxlevel;i++)
             {maxarr[i]=NULL;

             arr[i]=NULL;}

          maxlevel=0;

         
         
     }
    
    
 
    
   
    }
     return temp;
}



int diameterOfBinaryTree(struct TreeNode* root){

    
    int max=0;
    max = InoderSearch(root, 0);

    
    
    
    return  max;
    }
