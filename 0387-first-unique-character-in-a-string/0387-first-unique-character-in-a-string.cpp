class Solution {
public:
    int firstUniqChar(string s) 
    {
        int len = s.length(), final_index = -1;
        unordered_map<char, int> mp;
        
        for(int i = 0; i < len; i++)
        {
            mp[s[i]]++;
        }
        
        for(int i = 0; i < len; i++)
        {
            if(mp[s[i]] == 1)
            {
                final_index = i;
                break;
            }
        }
        return final_index;
    }
};