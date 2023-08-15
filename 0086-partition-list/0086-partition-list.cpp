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
    ListNode *partition(ListNode *head, int x) {
        ListNode* cur = head;
        ListNode* tag = head;
        while (cur != NULL) {
            if (cur->val < x) {
                ListNode* tmp = tag;
                int k = tmp->val;
                while (tmp != cur) {
                    swap(tmp->next->val, k);
                    tmp = tmp->next;
                }
                tag->val = k;
                tag = tag->next;
            }
            cur = cur->next;
        }
        return head;
    }
};