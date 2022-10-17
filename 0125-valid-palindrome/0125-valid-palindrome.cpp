class Solution {
public:
    bool isPalindrome(string s) 
    {
        bool flag = true;
        int len1 = s.length();
        string str = "";
        
        for(int i = 0; i < len1; i++)
        {
            if(isalnum(s[i]))
            {
                str.push_back(tolower(s[i]));
            }
        }
        
        int len2 = str.length();
        int i = 0, j = len2 - 1;
        
        while(i <= j)
        {
            if(str[i] != str[j])
            {
                flag = false;
                break;
            }
            i++;
            j--;
        }
        
        return flag;
    }
};