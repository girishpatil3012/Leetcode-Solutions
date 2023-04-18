class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int len1 = word1.length();
        int len2 = word2.length();
        string str = "";
        int i = 0, j = 0;
                
        while(i < len1 || j < len2)
        {
            if(i < len1)
            {
                str.push_back(word1[i]);
                i++;
            }
            if(j < len2)
            {
                str.push_back(word2[j]);
                j++;
            }
        }
        
        return str;
    }
};