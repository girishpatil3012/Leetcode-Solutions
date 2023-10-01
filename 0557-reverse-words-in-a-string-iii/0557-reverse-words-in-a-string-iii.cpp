class Solution {
public:
    string reverseWords(string s) 
    {
        int len1 = s.length();        
        
        for(int i = 0,j = 0; i <= len1; i++)
        {
            if(s[i] == ' ' || i == len1)
            {
                reverse(s.begin() + j, s.begin() + i);
                j = i + 1;
            }
        }
        
        return s;
    }
};