/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

    void DFS(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent)
    {
        if(!root)
            return;
        
        if(root->left)
            parent[root->left] = root;
        if(root->right)
            parent[root->right] = root;

        DFS(root->left, parent);
        DFS(root->right, parent);
    }

public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        unordered_map<TreeNode*, TreeNode*> parent;
        queue<TreeNode*> q;
        unordered_set<int> visited;
        vector<int> ans;

        DFS(root, parent);

        parent[root] = nullptr;
        q.push(target);
        visited.insert(target->val);

        for(int i = 0; i < k && !q.empty(); i++)
        {
            int levelSize = q.size();
            while(levelSize --> 0)
            {
                auto node = q.front();
                q.pop();

                if(node->left && visited.count(node->left->val) == 0)
                {
                    q.push(node->left);
                    visited.insert(node->left->val);
                }
                if(node->right && visited.count(node->right->val) == 0)
                {
                    q.push(node->right);
                    visited.insert(node->right->val);
                }
                auto pNode = parent[node];
                if(pNode != nullptr && visited.count(pNode->val) == 0)
                {
                    q.push(pNode);
                    visited.insert(pNode->val);
                }
            }
        }

        int ansSize = q.size();
        ans.resize(ansSize);
        for(int i = 0; i < ansSize; i++)
        {
            ans[i] = q.front()->val;
            q.pop();
        }

        return ans;
    }
};