class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int len = word.length();
        int i = 0, n = 0;
        int pos = -1;
        char temp;
        
        for(i = 0; i < len; i++)
        {
            if(word[i] == ch)
            {
                pos = i;
                break;
            }
        }
        
        if(pos == -1)
        {
            return word;
        }
        else
        {
            n = pos;
            
            for(i = 0; i <= pos/2; i++)
            {
                temp = word[i];
                word[i] = word[n];
                word[n] = temp;
                n--;
            }
        }
        
        return word;
    }
};