class Solution {
public:
    int maxValue(vector<vector<int>>& E, int k)
    {
        int n = E.size();
        sort(begin(E),end(E));
        vector<int> dp(n+1);
        for(int i = 1; i <= k; i++){
            vector<int> next(n+1);
            for(int j = n-1; j >= 0; j--){
                vector<int> temp = {E[j][1],INT_MAX,INT_MAX};
                int idx = upper_bound(begin(E)+j+1,end(E),temp) - begin(E);
                next[j] = max(dp[idx] + E[j][2],next[j+1]);
            }
            swap(dp,next);
        }
        return dp[0];
    }
};