class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        bool flag = false;
        int len = nums.size();
        unordered_map<int,int> mp;
        
        for(int i = 0; i < len; i++)
        {
            if(mp.count(nums[i]))
            {
                if(abs(i-mp[nums[i]]) <= k)
                {
                    flag = true;
                    break;
                }
            }
            mp[nums[i]] = i;
        }
        return flag;
    }
};