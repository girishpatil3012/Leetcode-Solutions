class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int pref_len=pref.size(); 
        int count = 0;
        
        for(auto i : words)
        {
            if(i.substr(0,pref_len) == pref) 
            {
                count++;
            }                              
        }
        return count;  
    }
};