class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) 
    {
        int minTime = 0, count = 0,len1 = garbage.size();
        int lastG = 0, lastP = 0, lastM = 0;
        
        for(int i = 0; i < len1; i++)
        {
            int len2 = garbage[i].size();
            for(int j = 0; j < len2; j++)
            {
                count++;
                if(garbage[i][j] == 'G')
                {
                    lastG = i;
                }
                else if(garbage[i][j] == 'M')
                {
                    lastM = i;
                }
                else 
                {
                    lastP = i;
                }
            }
        }
        
        int len3 = travel.size();
        for(int i = 1; i < len3; i++)
        {
            travel[i] = travel[i] + travel[i-1];
        }
        
        minTime = count;
        if(lastM > 0)
        {
            minTime += travel[lastM-1];
        }
        if(lastG > 0)
        {
            minTime += travel[lastG-1];
        }
        if(lastP > 0)
        {
            minTime += travel[lastP-1];
        }
        
        return minTime;
    }
};