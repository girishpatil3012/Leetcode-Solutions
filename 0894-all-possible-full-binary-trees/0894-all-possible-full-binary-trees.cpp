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
    std::vector<TreeNode*> allPossibleFBT(int n) {
        if (n == 0) {
            return {nullptr}; // Base case: return a vector containing a single nullptr (empty tree)
        }

        if (n == 1) 
        {
            return {new TreeNode()}; // Base case: return a vector containing a single tree with root value 0
        }

        if (n % 2 == 0) 
        {
            return {}; // Base case: return an empty vector for even n, as it is not possible to form a full binary tree
        }

        std::vector<TreeNode*> result;
        // Split the remaining nodes (n-1) into left and right subtrees,
        // ensuring that each subtree is a full binary tree.
        for (int i = 1; i < n; i += 2) {
            std::vector<TreeNode*> leftSubtrees = allPossibleFBT(i);
            std::vector<TreeNode*> rightSubtrees = allPossibleFBT(n - i - 1);

            // Combine left and right subtrees to create all possible full binary trees.
            for (TreeNode* leftTree : leftSubtrees) {
                for (TreeNode* rightTree : rightSubtrees) {
                    TreeNode* root = new TreeNode(0);
                    root->left = leftTree;
                    root->right = rightTree;
                    result.push_back(root);
                }
            }
        }

        return result;
    }
};