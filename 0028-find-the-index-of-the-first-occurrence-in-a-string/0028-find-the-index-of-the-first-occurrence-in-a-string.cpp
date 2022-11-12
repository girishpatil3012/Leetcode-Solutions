class Solution {
public:
    bool is_Equal(string s1, string s2)
    {
        int len1 = s1.length();
        int len2 = s2.length();
        bool flag = true;
        
        if(len1 < len2)
        {
            return false;
        }
        
        for(int i = 0; i < len2; i++)
        {
            if(s1[i] != s2[i])
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
    
    int strStr(string haystack, string needle) 
    {
        int len1 = haystack.length(), first_occ = -1;
        
        for(int i = 0; i < len1; i++)
        {
            if(haystack[i] == needle[0] && is_Equal(haystack.substr(i), needle) == true)
            {
                first_occ = i;
                break;
            }
        }
        return first_occ;
    }
};