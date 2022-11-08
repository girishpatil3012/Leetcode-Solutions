class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) 
    {
        vector<int> vec(k,0);
        unordered_map<int,set<int>> mp;
        
        for(auto x : logs)
        {
            mp[x[0]].insert(x[1]);
        }
        
        for(auto it : mp)
        {
            vec[it.second.size()-1]++;
        }
        return vec;
    }
};