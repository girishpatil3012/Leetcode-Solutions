class Solution {
public:
    int percentageLetter(string s, char letter) 
    {
        int len = s.length(), count = 0;
        
        for(int i = 0; i < len; i++)
        {
            if(s[i] == letter)
            {
                count++;
            }
        }
        
        int percentage = (count*100)/len;
        
        return percentage;
    }
};