class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        int len = sentence.length();
        unordered_map<char,int> mp;
        
        for(int i = 0; i < len; i++)
        {
            mp[sentence[i]]++;
        }
        
        if(mp.size() == 26)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};