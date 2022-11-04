class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        bool flag = true;
        
        for(auto x : nums)
        {
            mp[x]++;
        }
        
        for(auto i : mp)
        {
            if(i.second % 2 != 0)
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
};