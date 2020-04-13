

typedef struct stack{
    int num;
    struct stack* next;  
} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate() {
    MinStack* temp = malloc(sizeof(MinStack));
    
    temp->next=NULL;
    return temp;
}

void minStackPush(MinStack* obj, int x) {
  MinStack* temp = minStackCreate();
    temp->num= x;
    MinStack* curr=obj;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    
    curr->next= temp;
    
}

void minStackPop(MinStack* obj) {
  MinStack* curr=obj;
   
    while(curr->next->next!=NULL)
    {
        
        curr=curr->next;
    }
    curr->next =NULL;
   

    
}

int minStackTop(MinStack* obj) {
   MinStack* curr=obj;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    return curr->num;
}

int minStackGetMin(MinStack* obj) {
    MinStack* curr=obj;
    int min= obj->next->num;
    //printf("현재 최소값 :%d", min);
    while(curr->next!=NULL)
    {
        curr=curr->next;
        if(curr->num < min)
            min=curr->num;
    }
    return min;
}

void minStackFree(MinStack* obj) {
   free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, x);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
