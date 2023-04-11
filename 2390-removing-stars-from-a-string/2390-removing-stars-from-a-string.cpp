class Solution {
public:
    string removeStars(string s) 
    {
        int len = s.length();
        string str = "";
        
        for(int i = 0; i < len; i++)
        {
            if(s[i] != '*')
            {
                str.push_back(s[i]);
            }
            else
            {
                str.pop_back();
            }
        }
        return str;
    }
};