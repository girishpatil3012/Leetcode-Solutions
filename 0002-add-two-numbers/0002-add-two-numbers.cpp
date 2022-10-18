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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list3 = new ListNode();
        ListNode* temp = list3;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        int sum = 0, carry = 0;
        
        while(t1 != NULL || t2 != NULL || carry)
        {
            sum = 0;
            
            if(t1 != NULL)
            {
             sum += t1->val;
             
            }
            if(t2 != NULL)
            {
             sum += t2->val;
             
            }
            sum += carry;
            
            if(sum > 9)
            {
                carry = sum/10;
                sum = sum%10;
            }
            else
            {
                carry = 0;
            }
            
            if(t1 != NULL)
            {
                t1->val = sum;
                temp->next = t1;
                temp = temp->next;
                t1 = t1->next;
            }
            else if(t2 != NULL)
            {
                t2->val = sum;
                temp->next = t2;
                temp = temp->next;
                
            }
            else
            {
            ListNode* newn=new ListNode();
            newn->val = sum;
            //newn->next = NULL;
            temp->next = newn;
            temp = temp->next;
            }
            if(t2 != NULL)
            {
                t2 = t2->next;
            }
        }
        return list3->next;
    }
};