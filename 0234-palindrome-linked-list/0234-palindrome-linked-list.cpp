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
    bool isPalindrome(ListNode* head) 
    {
        vector<int> vec;
        bool flag = true;
        
        if(head == NULL)
        {
            return false;
        }
        
        while(head != NULL)
        {
            vec.push_back(head->val);
            head = head->next;
        }
        
        int len = vec.size();
        int start = 0;
        int end = len-1;
        
        while(start <= end)
        {
            if(vec[start] != vec[end])
            {
                flag = false;
                break;
            }
            start++;
            end--;
        }
        return flag;
    }
};