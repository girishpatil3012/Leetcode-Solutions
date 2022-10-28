class Solution {
public:
    int fib(int n) 
    {
        if(n < 2)
        {
            return n;
        }
        int a = 0, b = 1, c = 0;
        
        for(int i = 1; i < n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        
        return c;
    }
};
/*
int fib(int N) 
{
    if(N == 0)  return 0;
    if(N == 1)  return 1;
    return fib(N-1) + fib(N-2);
}
*/