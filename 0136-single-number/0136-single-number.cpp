class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int len = nums.size(), single_num = 0;
        unordered_map<int,int> mp;
        
        if(len == 1)
        {
            return nums[0];
        }
        
        for(int i = 0; i < len; i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second == 1)
            {
                single_num = it->first;
                break;
            }
        }
        
        return single_num;
    }
};