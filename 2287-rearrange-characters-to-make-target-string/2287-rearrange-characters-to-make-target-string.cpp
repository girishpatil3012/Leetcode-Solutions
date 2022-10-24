class Solution {
public:
    int rearrangeCharacters(string s, string target) 
    {
        unordered_map<char,int> mp;
        int len = target.length();
        int count = 0;
        
        for(auto it : s)
        {
            mp[it]++;
        }
        
        while(1)
        {
            int i = 0;
            for(i; i < len; i++)
            {
                if(mp[target[i]] > 0)
                {
                    mp[target[i]]--;
                }
                else
                {
                    break;
                }
            }
            if(i == len)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
    }
};