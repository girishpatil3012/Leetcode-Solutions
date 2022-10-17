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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* Previous = NULL;
        ListNode* Current = head;
        ListNode* Next = NULL;
        
        while(Current != NULL)
        {
            Next = Current->next;
            Current->next = Previous;
            Previous = Current;
            Current = Next;
        }
        
        return Previous;
    }
};