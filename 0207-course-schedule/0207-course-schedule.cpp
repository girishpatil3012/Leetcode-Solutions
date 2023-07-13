class Solution {
public:
    void cycleCheck(vector<int>& visited, vector<int> graph[], int i)
    {
        visited[i]=2;
        for(auto it:graph[i])
        {
            if(!visited[it])
            cycleCheck(visited, graph, it);
            if(visited[it]==2)
            return;
        }
        visited[i]=1;
    }
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int> graph[n];
        vector<int> in(n,0);
        for(int i=0;i<p.size();i++)
        {
            graph[p[i][0]].push_back(p[i][1]);
            in[p[i][1]]++;
        }
        vector<int> visited(n,0) , v;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            cycleCheck(visited, graph, i);
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==1)
            c++;
        }
        return c==n;
    }
};