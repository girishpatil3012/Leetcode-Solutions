class Solution {
public:
    void reverse_Word(string &s, int i, int j)
    {
        while(i < j)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    string reverseWords(string s) 
    {
        int len = s.length(), i = 0, j = 0;
        int l = 0, wordcount = 0;
        
        while(true)
        {
            while(i < len && s[i] == ' ')
            {
                i++;
            }
            if(i == len)
            {
                break;
            }
            if(wordcount)
            {
                s[j++] = ' ';
            }
            l = j;
            while(i < len && s[i] != ' ')
            {
                s[j]=s[i];
                i++;
                j++; 
            }
            reverse_Word(s,l,j-1);
            wordcount++;
        }
        s.resize(j);
        reverse_Word(s,0,j-1);
        return s;
    }
};