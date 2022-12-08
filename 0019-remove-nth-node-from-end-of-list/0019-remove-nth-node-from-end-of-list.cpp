/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* temp = new ListNode();
        temp->next = head;

        ListNode* fast = temp;
        ListNode* slow = temp;

        for(int i = 1; i <= n; i++)
        {
             fast=fast->next;
        }

        while(fast->next != NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }

        ListNode* tempdelete = slow->next;
        slow->next = slow->next->next;
        delete(tempdelete);
        
        return temp->next;
    }
};
/*       ListNode* temp = head;
         int count = 0;
        
         while(temp != NULL)
         {
             count++;
             temp = temp->next;
         }
        
         temp = head;
         int pos = (count - n) + 1;
        
         for(int i = 1; i < (pos-1); i++)
         {
             temp = temp->next;
         }
         ListNode* tempdelete = temp->next;
         temp->next = temp->next->next;
         delete tempdelete;
        
         return head;
*/