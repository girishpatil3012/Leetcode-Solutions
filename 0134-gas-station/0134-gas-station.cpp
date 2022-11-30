class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int curr = 0, total_cir = 0, start = 0, diff = 0;
        int len = gas.size();
        
        for(int i = 0; i < len; i++)
        {
            diff = gas[i] - cost[i];
            
            total_cir += diff;
            curr += diff;
            
            if(curr < 0)
            {
                start = i + 1;
                curr = 0;
            }
        }
        
        if(total_cir >= 0)
        {
            return start;
        }
        return -1;
    }
};