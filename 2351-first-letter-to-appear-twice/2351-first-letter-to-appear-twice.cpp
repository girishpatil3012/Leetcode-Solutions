class Solution {
public:
    char repeatedCharacter(string s) 
    {
        int len = s.length(), temp = 0;
        char twice_char = ' ';
        int *freq = new int[26];
        
        for(int i = 0; i < len; i++)
        {
            temp = s[i] - 'a';
            if(freq[temp] == 1)     // If already 1 then it means it's repeated
            {
                twice_char = s[i];
                break;
            }
            freq[temp] = 1;
        }
        
        return twice_char;
    }
};