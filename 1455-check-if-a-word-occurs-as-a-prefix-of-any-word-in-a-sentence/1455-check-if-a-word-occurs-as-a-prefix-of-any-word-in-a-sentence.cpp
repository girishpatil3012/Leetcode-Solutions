class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) 
    {
        int len1 = sentence.size();
        int len2 = searchWord.size();
        int wordCount = 0;
        
        for (int i = 0; i < len1; i++) 
        {
            if (i == 0 || sentence[i-1] == ' ') 
            {
                wordCount++;
                int j = 0;
                while (sentence[i] == searchWord[j]) 
                {
                    if (j == len2-1)
                    {
                        return wordCount;
                    }
                    i++;
                    j++;
                }
            }
        }
        return -1;

    }
};