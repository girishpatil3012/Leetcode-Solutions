class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int len1 = s.size(), len2 = t.size();
        int i = 0, j = 0;
        
        while(i < len1 && j < len2)
        {
            if(s[i] == t[j])
            {
                j++;
            }
            i++;
        }
        return len2-j;
    }
};