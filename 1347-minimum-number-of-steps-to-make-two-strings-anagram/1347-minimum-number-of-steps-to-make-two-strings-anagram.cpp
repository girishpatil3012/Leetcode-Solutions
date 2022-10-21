class Solution {
public:
    int minSteps(string s, string t) 
    {
        vector<int> freq(26,0);
        int count = 0;
        int len = s.length();
        
        for(int i = 0; i < len; i++)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] > 0)
            {
                count += freq[i];
            }
        }
        
        return count;
    }
};