class Solution {
public:
    int countOdds(int low, int high) 
    {
        int totalnums = high - low + 1;
        
        if((low % 2 != 0) && (high % 2 != 0))
        {
            return (totalnums/2) + 1;
        }
        else
        {
            return (totalnums/2);
        }
    }
};