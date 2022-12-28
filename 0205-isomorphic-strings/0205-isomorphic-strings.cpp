class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        int len = s.length();
        unordered_map<char,int> mp1, mp2;
        bool flag = true;
        
        for(int i = 0; i < len; ++i)
        {
            if(mp1[s[i]] != mp2[t[i]])
            {
                flag = false;
                break;
            }
            mp1[s[i]] = i+1;
            mp2[t[i]] = i+1;
        }
        return flag;
    }
};