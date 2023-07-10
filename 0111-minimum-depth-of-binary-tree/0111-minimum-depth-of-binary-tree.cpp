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
    int minDepth(TreeNode* root) {
        if (root == NULL) 
        {
            return 0;
        }
        int leftDepth = INT_MAX, rightDepth = INT_MAX;
        
        if (root -> left != NULL)
        {
            leftDepth = minDepth (root -> left);
        }
        
        if (root -> right != NULL) 
        {
            rightDepth = minDepth (root -> right);
        }
        
        int minValue = min(leftDepth, rightDepth);
        return minValue == INT_MAX ? 1 : 1 + minValue;
    }
};