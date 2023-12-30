class Solution {
public:
    bool makeEqual(vector<string>& words)
    {
        unordered_map<char, int> mp;
        int len = words.size();
        
        for(int i = 0; i < len; ++i)
            for(int j = 0; j < words[i].size(); j++)
                mp[words[i][j]]++;
        
        for(auto x : mp)
            if(x.second % len)
                return false;
        
        return true;
    }
};