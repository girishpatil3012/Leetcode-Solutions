class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int len = word.size();
        size_t i;
        bool flag = true;
        
        for(i = 1; i < len; ++i)
        {
            if((isupper(word[1]) != isupper(word[i])) || (islower(word[0]) && isupper(word[i])))
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
};