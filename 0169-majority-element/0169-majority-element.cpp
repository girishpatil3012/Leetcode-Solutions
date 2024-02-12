class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int maxcount = 0, res = 0;
        unordered_map<int,int> umap;
        
        for(int const &i: nums)
        {
            umap[i]++;
        }
        
        for(auto x:umap)
        {
            if(x.second > maxcount)
            {
                res = x.first;
                maxcount = x.second;
            }
        }
        
        return res;
    }
};