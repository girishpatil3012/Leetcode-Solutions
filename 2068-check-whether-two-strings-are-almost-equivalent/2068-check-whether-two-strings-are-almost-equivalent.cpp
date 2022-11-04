class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) 
    {
        int freq[26] = {};
        bool flag = true;
        
        for(auto c : word1)
        {
            freq[c - 'a']++;
        }
        
        for(auto c : word2)
        {
            freq[c - 'a']--;
        }
        
        for(int i = 0; i < 26; i++)
        {
            if(abs(freq[i]) > 3)
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
};