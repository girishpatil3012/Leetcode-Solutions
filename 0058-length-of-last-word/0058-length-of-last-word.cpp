class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int len = s.length();
        int last_len = 0;
        
        for(int i = len-1; i >= 0; i--)
        {
            if(s[i] != ' ')
            {
                last_len++;
            }
            if(s[i] == ' ' && last_len > 0)
            {
                break;
                //return last_len;
            }
            
        }
        return last_len;
    }
};