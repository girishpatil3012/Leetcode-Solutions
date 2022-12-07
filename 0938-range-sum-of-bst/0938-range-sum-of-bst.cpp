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
    int rangeSumBST(TreeNode* root, int L, int R) 
    {
        int counter = 0;
        
        rangeSum(root, counter, L, R);
        
        return counter;
    }
    
    void rangeSum(TreeNode* root, int& counter, int L, int R)
    {
        
        if(root->val >= L && root->val <= R){
            counter += root->val;
        }
        if(root->left != NULL){
            rangeSum(root->left, counter, L, R);
        }
        if(root->right != NULL){
            rangeSum(root->right, counter, L, R);
        }
    }
};