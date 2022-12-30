class Solution {
public:
    vector<vector<int>>result;
    vector<int>path;
    
    void dfs(int node, int &lastNode, vector<vector<int>>&graph)
    {
        path.push_back(node);

        if(node==lastNode) 
            result.push_back(path);

        for(int i=0;i<graph[node].size();i++)
            dfs(graph[node][i],lastNode,graph);
        
        path.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        
        int n = graph.size();

        dfs(0,--n,graph);
        
        return result;
    }
};