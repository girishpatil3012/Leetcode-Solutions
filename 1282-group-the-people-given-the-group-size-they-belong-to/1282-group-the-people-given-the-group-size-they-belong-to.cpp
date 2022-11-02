class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
        unordered_map<int,vector<int>> mp;
        vector<vector<int>> vec;
        int len = groupSizes.size();
        
        for(int i = 0; i < len; i++)
        {
            mp[groupSizes[i]].emplace_back(i);
            if(mp[groupSizes[i]].size() == groupSizes[i])
            {
                vec.emplace_back(mp[groupSizes[i]]);
                mp[groupSizes[i]].clear();
            }
        }
        return vec;
    }
};