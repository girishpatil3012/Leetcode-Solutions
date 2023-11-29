class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int pivot = 1;
        int count = 0;
        
        for(int i = 0; i < 32; i++)
        {
            int mask = pivot << i;
            
            if((n & mask) == mask)
            {
                count++;
            }
        }
        return count;    }
};