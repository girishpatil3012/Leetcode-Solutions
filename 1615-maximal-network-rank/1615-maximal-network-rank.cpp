class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        int ans = 0;
        vector<int> g[n];

        for(auto road : roads) {
            int u = road[0], v = road[1];
            g[u].push_back(v);
            g[v].push_back(u);
        }

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {

                int cnt = g[i].size() + g[j].size();
                for(auto v : g[i]) if(v == j) cnt--;
                ans = max(ans, cnt);

            }
        }

        return ans;

    }
};