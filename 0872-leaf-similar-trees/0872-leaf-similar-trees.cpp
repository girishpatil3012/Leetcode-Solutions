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
    bool is_Leaf(TreeNode* root)
    {
        if(root->left==NULL && root->right==NULL)
        {
            return true;
        }
        return false;
    }
    
    void find_leaves(TreeNode* root, vector<int> &res)
    {
        if(is_Leaf(root))
        {
            res.push_back(root->val);
            return;
        }
        if(root->left!=NULL){
            find_leaves(root->left,res);
        }
        if(root->right!=NULL){
            find_leaves(root->right,res);
        }
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> leavesroot1;
        
        find_leaves(root1,leavesroot1);
        vector<int> leavesroot2;
        find_leaves(root2,leavesroot2);
        if(leavesroot1==leavesroot2)
        {
            return true;
        }
        return false;
    }
};