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
    // time/space: O(n)/O(n)
    int amountOfTime(TreeNode* root, int start) {
        // DFS: build the graph
        unordered_map<int, vector<int>> graph;
        dfs(root, graph);

        // BFS: infection
        return bfs(graph, start);
    }
private:
    void dfs(TreeNode* curr, unordered_map<int, vector<int>>& graph) {
        // terminate
        if (curr == NULL) return;

        // build the graph
        if (curr->left != NULL) {
            graph[curr->val].push_back(curr->left->val);
            graph[curr->left->val].push_back(curr->val);
        }
        if (curr->right != NULL) {
            graph[curr->val].push_back(curr->right->val);
            graph[curr->right->val].push_back(curr->val);
        }

        // enumerate
        dfs(curr->left, graph);
        dfs(curr->right, graph);
    }
    int bfs(unordered_map<int, vector<int>>& graph, int start) {
        // insert the start node
        queue<int> q;
        unordered_set<int> visited;
        q.push(start);
        visited.insert(start);

        // BFS
        int time = -1;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int curr = q.front();
                q.pop();
                for (auto& next : graph[curr]) {
                    if (visited.count(next) != 0) continue;
                    q.push(next);
                    visited.insert(next);
                }
            }
            time++;
        }
        return time;
    }
};