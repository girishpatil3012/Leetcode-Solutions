class Solution {
public:
    bool checkPerfectNumber(int num) 
    {
        int Sum = 0;
        
        for(int i = num/2; (i >= 1) && (Sum <= num); i--)
        {
            if((num % i) == 0)
            {
                Sum += i;
            }
        }
        
        if(Sum == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};