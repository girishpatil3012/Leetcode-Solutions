class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        const int n=cost.size();
        int dp[2][n+1];
        fill(&dp[0][0], &dp[0][0]+2*(n+1), 1e9+7);
        dp[n&1][n]=0;
        #pragma unroll
        for (int i=n-1; i>=0; i--) {
            dp[i&1][n]=0;
            for (int walls=n-1; walls>=0; walls--) {
                // Paid worker can paint i-th wall
                int paint=cost[i]+dp[(i+1)&1][min(n, walls+1+time[i])];
                //Paid worker does not paint i-th wall
                dp[i&1][walls]=min(paint, dp[(i+1)&1][walls]);
            }
        }
        return dp[0][0];
    }
};