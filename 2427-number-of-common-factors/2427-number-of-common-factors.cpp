class Solution {
public:
    int commonFactors(int a, int b) 
    {
        int max_num = max(a,b);
        int count = 0, i = 1;
        
        while(i <= max_num/2)
        {
            if(((a % i) == 0) && ((b % i) == 0))
            {
                count++;
            }
            i++;
        }
        
        if(a==b)
        {
            return count+1;
        }
        return count;
    }
};