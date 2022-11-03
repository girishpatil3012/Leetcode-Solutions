class Solution {
public:
    int longestPalindrome(vector<string>& words) 
    {
        int freq[26][26] = {};
        int longest_len = 0;
        int len = words.size();
        
        for(int i = 0; i < len; i++)
        {
            int x = words[i][0] - 'a';
            int y = words[i][1] - 'a';
            
            if(freq[y][x])
            {
                longest_len += 4;
                freq[y][x]--;
            }
            else 
            {
                freq[x][y]++;
            }
        }
        
        for(int i = 0; i < 26; i++)
        {
            if(freq[i][i])
            {
                longest_len += 2;
                break;
            }
        }
        return longest_len;
    }
};