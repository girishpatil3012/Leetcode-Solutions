class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string str = "";
        int len1 = strs[0].size();
        int len2 = strs.size();
        
        for(int i = 0 ; i < len1; i++) 
        {
            for(int j = 1; j < len2; j++) 
            {
                if(strs[0][i] != strs[j][i]) 
                {
                    return str;
                }
            }
            str += strs[0][i];
        }
        
        return str;
    }
};