class Solution {
public:
    bool isPowerOfFour(int num) 
    {
        bool flag = false;
        
        if(num < 0)
        {
            return false;
        }
        
        for(int i = 0; i < 32; i+=2)
        {
            if(num==1<<i)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
};