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
    int maxProduct(TreeNode* root) 
    {
        long int totalSum=0;
        getTotalSum(root,totalSum);
        
        long  int res=INT_MIN;
        maxProdHelper(root,res,totalSum);
        return (long)(res)%1000000007;
        
    }
    
    long int maxProdHelper(TreeNode* root,long int& res,long int totalSum)
    {
        if(!root)
            return 0;
        long int currSum=root->val;
        long int left=maxProdHelper(root->left,res,totalSum);
        long int right=maxProdHelper(root->right,res,totalSum);
        res=max(res,max( ((long)(totalSum-left)*(left)),((long)(totalSum-right)*(right))));
        currSum+=left+right;
        return currSum;
    }
    
    
    void getTotalSum(TreeNode* root, long int& totalSum)
    {
        if(!root)
            return ;
        totalSum+=root->val;
        getTotalSum(root->left,totalSum);
        getTotalSum(root->right,totalSum);
        
    }
};