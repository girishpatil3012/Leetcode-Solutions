/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head)
    {
        if(!head)
            return NULL;

        Node * ptr = head;
        while(ptr!=NULL)
        {
            Node * temp = ptr->next;
            Node * new1 = new Node(ptr->val);
            ptr->next = new1;
            new1->next = temp;
            ptr = temp;
        }

        ptr = head;
        while(ptr!=NULL)
        {
            if(ptr->random != NULL)
            {
                ptr->next->random = ptr->random->next;
            }
            else{
                ptr->next->random = NULL;
            }
            ptr = ptr->next->next;

        }

        Node * ans = head->next;
        ptr = head;

        while(ptr)
        {
            Node * temp = ptr->next;
            ptr->next = temp->next;
            ptr = ptr->next;
            if(ptr) temp->next = ptr->next;
            else temp->next = nullptr;
        }
        return ans;
    }
};