class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int> mp;
        int res = 0;
        int len = s.length();
        
        for(int i = 0; i < len; i++) 
        {
            mp[s[i]]++;
            if(mp[s[i]] % 2 == 0)
            {
                res += mp[s[i]];
                mp[s[i]] = 0;
            }
        }
        
        for(auto x: mp)
        {
            if(x.second == 1) 
            {
              res++;
              break;
            }  
        }
        return res;
    }
};