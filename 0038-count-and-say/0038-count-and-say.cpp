class Solution {
public:
    string countAndSay(int n) 
    {
        if(n == 0)
        {
            return "";
        }
        if(n == 1)
        {
            return "1";
        }
        string str = "1";
        
        while(--n)
        {
            string s = "";
            int len = str.size();
            for(int i = 0; i < len; i++)
            {
                int count = 1;
                while((i + 1< len) && (str[i] == str[i+1]))
                {
                    count++;
                    i++;
                }
                s += to_string(count) + str[i];
            }
            str = s;
        }
        
        return str;
    }
};