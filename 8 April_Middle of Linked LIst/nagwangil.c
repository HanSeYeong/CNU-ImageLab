/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head) {
   
    struct ListNode* answerCurr = head;
    struct ListNode* curr = head;
   
    int  CurrCount = 1;

    while (curr ->next!= NULL)
    {
        
       if(curr->next != NULL)
       {  curr = curr->next;
            CurrCount++;
       }
              
        if(CurrCount%2==0)
        {
            answerCurr = answerCurr->next;
        }
 
    }

    return answerCurr;

}


