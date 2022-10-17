class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> vec;
        unordered_map<int,int> mp;
        
        for(auto x : nums1)
        {
            mp[x]++;
        }
        
        for(auto x : nums2)
        {
            if(mp.count(x) == true && mp[x] != 0)
            {
                vec.push_back(x);
                mp[x]--;
            }
        }
        
        return vec;
    }
};