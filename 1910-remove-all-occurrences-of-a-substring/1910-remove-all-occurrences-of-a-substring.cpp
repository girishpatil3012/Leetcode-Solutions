class Solution {
public:
    string removeOccurrences(string s, string part) 
    {
        while(true)
        {
            size_t p = s.find(part);
            if(p == string::npos)
            {
                break;
            }
            s.erase(p, size(part));
        }
        return s;
    }
};