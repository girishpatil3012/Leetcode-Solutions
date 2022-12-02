class Solution {
public:
    bool is_Subseq(string s, string t)
    {
        int i = 0;
        
        for(char ch : s)
        {
            if(ch >= 'A' && ch <= 'Z' && ch != t[i])
            {
                return false;
            }
            if(ch == t[i])
            {
                i++;
            }
        }
        return i == t.size();
    }
    
    vector<bool> camelMatch(vector<string>& queries, string pattern) 
    {
        vector<bool> vec;
        
        for(auto x : queries)
        {
            vec.emplace_back(is_Subseq(x, pattern));
        }
        return vec;
    }
};