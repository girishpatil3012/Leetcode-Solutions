class Solution {
public:
    string reverseOnlyLetters(string s) 
    {
        int len = s.length();
        
        int start = 0;
        int end = len - 1;
        
        while(start < end)
        {
            if(isalpha(s[start]) && isalpha(s[end]))
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            else if(!isalpha(s[start]) && !isalpha(s[end]))
            {
                start++;
                end--;
            }
            else if(!isalpha(s[start]))
            {
                start++;
            }
            else 
            {
                end--;
            }
        }
        
        return s;
    }
};