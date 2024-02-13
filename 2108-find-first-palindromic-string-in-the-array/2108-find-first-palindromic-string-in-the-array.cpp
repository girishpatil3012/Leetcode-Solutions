class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    {
        int len = words.size();
        string str = "";
        
        for(int i = 0; i < len; i++)
        {
            string s = words[i];
            
            reverse(s.begin(), s.end());
            
            if(s.compare(words[i]) == 0)
            {
                str = words[i];
                break;
            }
        }
        
        return str;
    }
};