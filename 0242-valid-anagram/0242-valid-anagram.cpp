class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int *freq1 = new int[26];
        int *freq2 = new int[26];
        int len1 = s.length(), i = 0;
        int len2 = t.length();
        
        if(len1 != len2)
        {
            return false;
        }
        
        for(i = 0; i < len1; i++)
        {
            freq1[s[i] - 'a']++;
            freq2[t[i] - 'a']++;
        }
        
        for(i = 0; i < 26; i++)
        {
            if(freq1[i] != freq2[i])
            {
                break;
            }
        }
        
        if(i == 26)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};