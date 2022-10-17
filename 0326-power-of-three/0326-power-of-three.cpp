class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        long long x = 3;
        
        while(x < n)
        {
           x = x * 3;
        }
        
        if(x==n || n==1)
        {
            return true;
        }
        else
        {
            return false;
        }    
    }
};