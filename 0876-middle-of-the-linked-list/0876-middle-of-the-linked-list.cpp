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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode * slow = NULL;
        slow = head;
        
        ListNode * fast = NULL;
        fast = head->next;
        
        if(head->next == NULL || head == NULL)
        {
            return head;
        }
        if(head->next->next == NULL)
        {
            return head->next;
        }
        
        while (fast != NULL)
        {

            fast = fast->next;

            if (fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
        }
        return slow;
    }
};