class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int len = nums.size();
        vector<int> vec;
        unordered_map<int,int> mp;
        int factor = len/3;
        
        if(len == 1)
        {
            return nums;
        }
        
        for(int i = 0; i < len; i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second > factor)
            {
                vec.push_back(it->first);
            }
        }
        return vec;
    }
};