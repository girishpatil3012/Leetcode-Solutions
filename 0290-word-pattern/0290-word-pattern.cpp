class Solution {
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char,string> mp;
        vector<string> vec;
        string word;
        stringstream iss(s);
        set<string> st;
    
        while(iss >> word)
        {
            vec.push_back(word);
        }
        
        if(vec.size() != pattern.size())
        {
            return false;
        }
        
        int len = pattern.size();
        for(int i = 0; i < len; i++)
        {
            if(mp.find(pattern[i]) != mp.end())
            {
                if(mp[pattern[i]] != vec[i])
                {
                    return false;  
                }
            }
            else 
            {
                if(st.count(vec[i]) > 0)
                {
                    return false;
                }
                mp[pattern[i]] = vec[i];
                st.insert(vec[i]);
            }
        }
        return true;
    }
};