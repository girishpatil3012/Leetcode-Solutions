class Solution {
public:
    double champagneTower(int poured, int n, int query_glass) {
        vector<vector<double>>dp;

        for(int i=0; i<=n; i++){
            vector<double>v(i+1,0);
            dp.push_back(v);
        }

        dp[0][0] = poured;

        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                if(dp[i][j] <= 1) continue;
                dp[i+1][j] += (dp[i][j]-1)/2;
                dp[i+1][j+1] += (dp[i][j]-1)/2;
            } 
        }

        return dp[n][query_glass] > 1 ? 1 : dp[n][query_glass];
    }
};