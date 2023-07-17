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
        ListNode* temp;
        temp = l1;
        stack<int>s1,s2;

        while(temp){
            s1.push(temp->val);
            temp=temp->next;
        }
        temp = l2;
        while(temp){
            s2.push(temp->val);
            temp=temp->next;
        }
        temp=NULL;
        int a,b,c=0;
        while(s1.size() || s2.size()){
            a=0,b=0;
            if(s1.size()){
                a=s1.top();
                s1.pop();
            }
            if(s2.size()){
                b=s2.top();
                s2.pop();
            }
            c=(a+b+c);
            temp=new ListNode(c%10,temp);
            c=c/10;
        }
        if(c)
            return new ListNode(1,temp);
        return temp;
    }
};