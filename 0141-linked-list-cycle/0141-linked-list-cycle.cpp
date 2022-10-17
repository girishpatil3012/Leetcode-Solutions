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
    bool hasCycle(ListNode *head) 
    {
        bool flag = false;
        
        if(head == NULL)
        {
            return flag;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        // increment fast by 2 step and slow by 1 step
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            
            if(slow == fast)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
};