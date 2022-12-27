class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) 
    {
        int len = capacity.size();
        vector<int> requiredRocks(len);
        
        for(int i = 0; i < len; ++i)
        {
            requiredRocks[i] = capacity[i] - rocks[i];
        }
        
        sort(requiredRocks.begin(),requiredRocks.end());
        int fill_bag = 0;
        
        for(int i = 0; i < len and additionalRocks > 0; i++) 
        {
            if(requiredRocks[i] != 0) 
            {
                if(additionalRocks >= requiredRocks[i])
                {
                    fill_bag++;
                }
                additionalRocks = additionalRocks - requiredRocks[i];
            } 
            else 
            {
                fill_bag++;
            }
        }
        return fill_bag;
    }
};