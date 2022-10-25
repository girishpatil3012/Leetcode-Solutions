class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string str1 = "";
        string str2 = "";
        int len1 = word1.size();
        int len2 = word2.size();
        
        for(int i = 0; i < len1; i++)
        {
            str1 += word1[i];
        }
        
        for(int i = 0; i < len2; i++)
        {
            str2 += word2[i];
        }
        
        if(str1.compare(str2) == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};