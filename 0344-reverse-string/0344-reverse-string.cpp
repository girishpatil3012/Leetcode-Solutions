class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int len = s.size();
        int i = 0, j = len-1;
        
        while(i < j)
        {
            char ch = s[i];
            s[i] = s[j];
            s[j] = ch;
            
            i++;
            j--;
        }
    }
};