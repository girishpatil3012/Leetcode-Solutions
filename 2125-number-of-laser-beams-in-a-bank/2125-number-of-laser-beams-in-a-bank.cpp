class Solution {
public:
    int numberOfBeams(vector<string>& bank) 
    {
        int len = bank.size();
        int current = 0, previous = 0, total = 0;
        
        for(int i = 0; i < len; i++)
        {
            current = count(bank[i].begin(), bank[i].end(), '1');
            if(current > 0)
            {
                total += previous * current;
                previous = current;
            }
        }
        return total;
    }
};