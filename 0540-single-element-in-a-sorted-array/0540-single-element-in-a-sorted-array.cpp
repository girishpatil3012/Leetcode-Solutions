class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        int len = nums.size();
        
        for(int i = 0; i < len; ++i)
            mp[nums[i]]++;
        
        for(auto [x, freq] : mp)
        {
            if(freq == 1)
                return x;
        }
        return -1;
    }
};