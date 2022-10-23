class Solution {
public:
    
    bool is_palindrome(string str)
    {
        int len = str.length();
        int start = 0;
        int end = len - 1;
        bool flag = true;
        
        while(start < end)
        {
            if(str[start] != str[end])
            {
                flag = false;
                break;
            }
            start++;
            end--;
        }
        return flag;
    }
    
    bool isStrictlyPalindromic(int n) 
    {
        //bitset<8> b(n);
        bool flag = true;
        
        for(int i = 2; i <= n-2; i++)
        {
            int temp = n;
            string s;
            
            while(temp > 0)
            {
                s.push_back(temp % i);
                temp /= i;
            }
            
            if(is_palindrome(s) != true)
            {
                flag = false;
                break;
            }
        }
        
        return flag;
    }
};