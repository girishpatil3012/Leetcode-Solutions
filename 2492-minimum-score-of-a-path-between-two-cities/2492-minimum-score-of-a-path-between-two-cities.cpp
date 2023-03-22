class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) 
    {
        int ans = INT_MAX; 
        vector<vector<pair<int, int>>> g(n + 1);
        
        for(auto r: roads)
        {
            g[r[0]].push_back({r[1], r[2]});
            g[r[1]].push_back({r[0], r[2]});
        }
        
        vector<int> vis(n+1, 0);
        queue<int> q;
        q.push(1); vis[1] = 1;    
        while(!q.empty())
        {
            auto node = q.front();
            q.pop();
            for(auto i: g[node])
            {
                ans = min(ans, i.second);   
                if(vis[i.first] != 1)
                {
                    vis[i.first] = 1;
                    q.push(i.first);
                }
            }
        }
        return ans;
    }
};