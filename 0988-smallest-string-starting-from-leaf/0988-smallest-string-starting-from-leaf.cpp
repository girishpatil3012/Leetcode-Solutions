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
    void update(const vector<int>& cur, vector<int>& res) {
        if (res.empty()) {
            res = cur;
            return;
        }

        int l = cur.size() - 1;
        int r = res.size() - 1;

        while (l >= 0 && r >= 0) {
            if (cur[l] < res[r]) {
                res = cur;
                return;
            } else if (cur[l] > res[r]) {
                return;
            }

            l--;
            r--;
        }

        if (r >= 0)
            res = cur;
    }

    void dfs(TreeNode* node, vector<int>& cur, vector<int>& res) {
        if (node == NULL)
            return;

        cur.push_back(node->val);

        if (node->left == NULL && node->right == NULL) {
            update(cur, res);
            cur.pop_back();
            return;
        }

        dfs(node->left, cur, res);
        dfs(node->right, cur, res);

        cur.pop_back();
    }

    string smallestFromLeaf(TreeNode* root) {
        vector<int> res;
        vector<int> cur;
        
        dfs(root, cur, res);

        string str = "";
        for (int i = res.size() - 1; i >= 0; i--)
            str += 'a' + res[i];
        
        return str;
    }
};