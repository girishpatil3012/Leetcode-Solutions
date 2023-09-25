class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        string str = s + t;
        int len = str.length();
        char y = 0;
        
        for(int i = 0; i < len; i++)
        {
            y = y ^ str[i];
        }
        
        return y;
    }
};