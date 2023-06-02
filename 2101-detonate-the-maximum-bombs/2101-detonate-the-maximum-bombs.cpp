class Solution {
public:
    
    int maximumDetonation(vector<vector<int>>& bombs) {
        ios::sync_with_stdio(false); cin.tie(NULL);
		
        const int n = bombs.size();
		
        vector<vector<int>>v(n);
        
        for(int i = 0; i < n; i++) {
            long long r = (long long)bombs[i][2] * bombs[i][2];
            for(int j = 0; j < n; j++) {
                if(i != j){
                    if((long long)((long long)bombs[i][0]-bombs[j][0]) * ((long long)bombs[i][0]-bombs[j][0])+(long long)(bombs[i][1]-bombs[j][1]) * ((long long)bombs[i][1]-bombs[j][1]) <= r){
                       v[i].push_back(j);
                    }
                }
            }
        }
        
        int ans = 1;
        // try each bomb and choose that which contributes maximum detonation.
        for(int i = 0; i < n; i++){
            vector<bool>vis(n, 0);
            int mx = 0;
            
			queue<int>q;
            q.push(i);
			
            while(!q.empty()) {
                int s = q.size();
                for(int i = 0; i < s; i++) {
                    int x = q.front();
                    q.pop();
                    vis[x] = 1;
                    mx++;
                    for(auto p : v[x]) {
                        if(!vis[p]) {
                            q.push(p);
                            vis[p] = 1;
                        }
                    }
                }
            }
            ans = max(ans, mx);
        }
        
        return ans;
    }
};