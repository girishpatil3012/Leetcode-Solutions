/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        map<int,int>mp;    //to store left most node at each level

        queue<pair<TreeNode*, int>> q;   //{TreeNode, level}
        int ans = 0;
        if(root == NULL){
            return ans;
        }
        q.push({root, 0});
        while(!q.empty())
        {
            auto it = q.front();
            TreeNode* node = it.first;
            int level = it.second;
            q.pop();

            if(mp.find(level) == mp.end()){
                mp[level] = node->val;
            }
            if(node->left){
                q.push({node->left, level+1});
            }
            if(node->right){
                q.push({node->right, level+1});
            }
        }

        return mp[mp.size()-1];
    }
};