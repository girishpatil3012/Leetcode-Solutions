class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_set<char> st;
        int len = s.length(), i = 0, j = 0, max_sub = 0;
        
        while(i < len && j < len)
        {
            if(st.find(s[j]) == st.end())
            {
                st.insert(s[j++]);
                max_sub = max(max_sub, j-i);
            }
            else 
            {
                st.erase(s[i++]);
            }
        }
        return max_sub;
    }
};