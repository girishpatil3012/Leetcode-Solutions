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
    int res;
public:
    int depth(TreeNode *root)
    {
        if(root==NULL) 
            return 0;
        
        int a=depth(root->left), b=depth(root->right);
        res=max(res,a+b+root->val);
        
        return max(0,max(a, b)+root->val);
    }
    
    int maxPathSum(TreeNode *root) 
    {
        if(root==NULL) 
            return 0;
        
        res=root->val;
        depth(root);
        
        return res;
    }
};