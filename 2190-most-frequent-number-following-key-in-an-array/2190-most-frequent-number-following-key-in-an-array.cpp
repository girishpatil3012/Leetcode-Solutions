class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) 
    {
        int len = nums.size();
        int count = 0, max_target = -1, max_count = INT_MIN;
        unordered_map<int,int> mp;
        
        for(int i = 0; i < len-1; i++)
        {
            if(nums[i] == key)
            {
                mp[nums[i+1]]++;
            }
        }
        
        for(auto x : mp)
        {
            if(x.second > max_count)
            {
                max_count = x.second;
                max_target = x.first;
            }
        }
        return max_target;
    }
};