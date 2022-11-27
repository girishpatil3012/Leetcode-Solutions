class Solution {
public:
    int pivotInteger(int n) 
    {
        int pivot = -1;

        for(int i = 1; i <= n; i++)
        {
            int sum = 0;
            for(int j = i; j <= n; j++)
            {
                sum += j;
            }
            if(sum == (i*(i+1))/2)
            {
                pivot = i;
                break;
            }
        }
        return pivot;
    }
};