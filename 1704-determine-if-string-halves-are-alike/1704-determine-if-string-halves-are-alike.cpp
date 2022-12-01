class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int len = s.length();
        string str1 = "";
        string str2 = "";
        
        for(int i = 0; i < len/2; i++)
        {
            str1 += s[i];
        }
        
        for(int i = len/2; i < len; i++)
        {
            str2 += s[i];
        }
        
        int len1 = str1.length();
        int len2 = str2.length();
        int count1 = 0, count2 = 0;
        
        for(int i = 0; i < len1; i++)
        {
            if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' ||
               str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U')
            {
                count1++;
            }
        }
        
        for(int i = 0; i < len2; i++)
        {
            if(str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u' ||
               str2[i] == 'A' || str2[i] == 'E' || str2[i] == 'I' || str2[i] == 'O' || str2[i] == 'U')
            {
                count2++;
            }
        }
        
        if(count1 == count2)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};