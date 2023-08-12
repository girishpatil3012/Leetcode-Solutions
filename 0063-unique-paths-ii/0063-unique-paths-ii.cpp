class Solution {
public:
    int solve(int i,int j,vector<vector<int>> &nums,int m,int n,vector<vector<int>> &dp)
    {
        if(i>=m || j>=n) return 0;
        if(nums[i][j]==1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==m-1 && j==n-1) return 1;

        int ans=nums[i][j] + solve(i+1,j,nums,m,n,dp) + solve(i,j+1,nums,m,n,dp);
        return dp[i][j]=ans;

    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        vector<vector<int>> dp(obstacleGrid.size(),vector<int> (obstacleGrid[0].size(),-1) );
        return solve(0,0,obstacleGrid,obstacleGrid.size(),obstacleGrid[0].size(),dp);
    }
};