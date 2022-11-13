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
    int minimumOperations(TreeNode* root) 
    {
        int min = 0;
        queue<TreeNode*> qt;
        qt.push(root);
        while(!qt.empty())
        {
            int len = qt.size(), i = 0;
            vector<int> vec(len);
            while(len--)
            {
                TreeNode* no = qt.front();
                qt.pop();
                vec[i++] = no->val;
                if(no -> left)
                {
                    qt.push(no->left);
                }
                if(no -> right)
                {
                    qt.push(no->right);
                }
            }
            min += Operations(vec);
        }
        return min;
    }
    
    int Operations(vector<int> vec)
    {
        int len = vec.size(), ret = 0;
        unordered_map<int,int> mp;
        
        for(int i = 0; i < len; i++)
        {
            mp[vec[i]] = i;
        }
        
        sort(vec.begin(), vec.end());
        vector<bool> v(len, false);
        
        for(int i = 0; i < len; i++)
        {
            if(v[i] or mp[vec[i]] == i)
            {
                continue;
            }
            int k = i, cyc = 0;
            while(!v[k])
            {
                v[k] = true;
                k = mp[vec[k]];
                cyc++;
            }
            if(cyc > 0)
            {
                ret += cyc-1;
            }
        }
        return ret;
    }
};