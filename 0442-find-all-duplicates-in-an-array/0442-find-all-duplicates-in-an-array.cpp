class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int len = nums.size();
        unordered_map<int,int> mp;
        vector<int> vec;
        
        for(int i = 0; i < len; i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto x : mp)
        {
            if(x.second == 2)
            {
                vec.push_back(x.first);
            }
        }
        return vec;
    }
};