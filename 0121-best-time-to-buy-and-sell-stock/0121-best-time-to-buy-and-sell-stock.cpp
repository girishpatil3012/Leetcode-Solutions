class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int len = prices.size();
        int mini = INT_MAX;
        int ret = 0;
        
        for(int i = 0; i < len; ++i)
        {
            mini = min(mini, prices[i]);
            ret = max(ret, prices[i] - mini);
        }
        return ret;
    }
};