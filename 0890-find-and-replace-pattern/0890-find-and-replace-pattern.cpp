class Solution {
public:
    bool char_freq(string s1, string s2)
    {
        bool flag = true;
        int len = s1.length();
        unordered_map<char,char> mp1, mp2;
        
        for(int i = 0; i < len; i++)
        {
            if( (mp1.count(s1[i]) && mp1[s1[i]] != s2[i]) || 
			(mp2.count(s2[i]) && mp2[s2[i]] != s1[i])) 
            {
                flag = false;
                break;
            }
            else 
            {
                mp1[s1[i]] = s2[i],
			    mp2[s2[i]] = s1[i];
            }
        }
        return flag;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> vec;
        int len = words.size();
        
        for(int i = 0; i < len; i++)
        {
            if(char_freq(words[i], pattern) == true)
            {
                vec.emplace_back(words[i]);
            }
        }
        return vec;
    }
};