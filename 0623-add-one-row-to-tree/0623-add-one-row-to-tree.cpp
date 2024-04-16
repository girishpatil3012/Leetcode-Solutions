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
    TreeNode* addOneRow(TreeNode* root, int val, int depth,bool isleft=true) {
        if(depth == 1){
            TreeNode *newnode = new TreeNode(val);
            if(isleft) newnode->left = root;
            else newnode->right = root;
            return newnode;
        }
        if(root == NULL) return NULL;
        root->left = addOneRow(root->left,val,depth-1,true);
        root->right = addOneRow(root->right,val,depth-1,false);
        return root;
    }
};