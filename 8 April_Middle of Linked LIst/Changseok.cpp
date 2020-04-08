/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       ListNode* temp;
        temp = head;
        int n=1;
        while(temp->next != NULL)
        {
            temp = temp->next;
            n++;
        }

        n =n/2+1;
        
        temp=head;
        for(int i = 1; i< n; i++)
        {
            temp  = temp->next;
        }
        
        return temp;
    }
};
//
