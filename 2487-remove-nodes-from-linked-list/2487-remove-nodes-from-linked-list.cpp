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
    ListNode* removeNodes(ListNode* head) 
    {
        vector<int> vec;
        ListNode* temp = head;
        
        while(temp != NULL)
        {
            if(vec.size() == 0)
            {
                vec.push_back(temp->val);
            }
            else 
            {
                while(vec.size() && temp->val > vec.back())
                {
                    vec.pop_back();
                }
                vec.push_back(temp->val);
            }
            temp = temp->next;
        }
        
        ListNode * root = new ListNode(vec[0]);
        ListNode * curr = root;
        int len = vec.size();
        
        for(int i = 1; i < len; i++)
        {
            curr->next = new ListNode(vec[i]);
            curr = curr->next;
        }
        return root;
    }
};