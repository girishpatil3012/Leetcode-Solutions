class Solution {
public:
    bool is_pal(string s, int start, int end)
    {
        bool flag = true;
        
        while(start < end)
        {
            if(s[start] != s[end])
            {
                flag = false;
                break;
            }
            start++;
            end--;
        }   
        return flag;
    }
    
    bool validPalindrome(string s) 
    {
        int len = s.length();
        int start = 0, end = len-1;
        bool flag = true;
        
        while(start < end)
        {
            if(s[start] != s[end])
            {
                flag = is_pal(s, start+1, end) || is_pal(s, start, end-1);
                break;
            }
            start++;
            end--;
        }
        return flag;
    }
};