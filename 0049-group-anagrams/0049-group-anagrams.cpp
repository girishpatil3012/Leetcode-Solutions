class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        if(strs.size() == 1)
        {
            return {{strs[0]}};
        }
        vector<vector<string>> vec;
        unordered_map<string, vector<string>> mp;
        
        for(int  i = 0; i < strs.size(); i++)
        {
            string str = strs[i];
            sort(strs[i].begin(), strs[i].end()); 
            mp[strs[i]].push_back(str);  
        }
        
        for(auto i = mp.begin(); i != mp.end(); i++)
        {
            vec.push_back(i -> second); 
        }
        return vec;
    }
};