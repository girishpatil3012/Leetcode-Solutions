class Solution {
public:
    int reverse(int x) 
    {
        long long no = 0;
        
        while(x != 0)
        {
            if(no > INT_MAX/10 || no < INT_MIN/10)
            {
                no = 0;
                break;
            }
            else 
            {
                no = (no * 10) + (x % 10);
                x /= 10;
            }
        }
        return no;
    }
};