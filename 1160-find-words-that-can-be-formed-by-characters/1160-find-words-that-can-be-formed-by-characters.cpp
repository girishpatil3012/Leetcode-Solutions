class Solution 
{
public:
    
    bool is_word(vector<int> freq1, vector<int> freq2)
    {
        bool flag = true;
        
        for(int i = 0; i < 26; i++)
        {
            if(freq1[i] < freq2[i])
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
    
    int countCharacters(vector<string>& words, string chars) 
    {
        int len1 = words.size();
        int len2 = chars.length();
        int Sum = 0;
        
        vector<int> freq1(26,0);   // to calculate character frequency
        
        
        for(int i = 0; i < len2; i++)
        {
            freq1[chars[i] - 'a']++;
        }
        
        for(int i = 0; i < len1; i++)
        {
            vector<int> freq2(26,0);   // to calculate words frequency
            int len3 = words[i].size();
            
            for(int j = 0; j < len3; j++)
            {
                freq2[words[i][j] - 'a']++;
            }
            
            bool flag = is_word(freq1,freq2);
            if(flag == true)
            {
                Sum += words[i].size();
            }
        }
        return Sum;
    }
};