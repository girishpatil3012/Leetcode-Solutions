class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins)
    {
        int len = costs.size();
        sort(costs.begin(), costs.end());
        
        for(int i = 0; i < len; ++i)
        {
            if(coins >= costs[i])
                coins -= costs[i];
            else
                return i;
        }
        return len;
    }
};