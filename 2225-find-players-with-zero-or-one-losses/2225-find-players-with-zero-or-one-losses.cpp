class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        int len = matches.size();
        vector<vector<int>> vec(2);
        unordered_map<int,int> mp;
        
        for(int i = 0; i < len; i++)
        {
            mp[matches[i][1]]++;
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second == 1)
            {
                vec[1].push_back(it->first);
            }
        }
        
        for(int i = 0; i < len; i++)
        {
            if(mp[matches[i][0]]==0)
            {
                vec[0].push_back(matches[i][0]);
                mp[matches[i][0]] = 1;
            }
        }
        sort(vec[0].begin(),vec[0].end());
        
        sort(vec[1].begin(),vec[1].end());
        
        return vec;
    }
};