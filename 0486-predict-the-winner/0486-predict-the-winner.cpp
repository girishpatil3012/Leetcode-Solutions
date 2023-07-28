class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
                            
        int n = nums.size();                    
        
        int dp[n+1][n+1];
        
        for(int len = 1; len <= n; len++) 
        {
            for(int i = 1, j = i + len - 1; j <= n; i++, j++) 
            {
                int& val = dp[i][j] = 0;
                
                if(len == 1) val = nums[i-1];
                else if(len == 2) val = max(nums[i-1], nums[j-1]);
                else val = max(nums[i-1] + min(dp[i+2][j], dp[i+1][j-1]), nums[j-1] + min(dp[i][j-2], dp[i+1][j-1]));
                
            }
        }
        
        int tot = 0;
        for(int x : nums) tot += x;
        bool player1_wins = dp[1][n] >= (tot % 2 == 1) + tot / 2;
        
        return player1_wins;
        
    }
};