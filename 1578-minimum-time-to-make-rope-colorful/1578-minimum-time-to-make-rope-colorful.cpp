class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) 
    {
        int len = colors.length();
        int time = 0;
        
        for(int i = 1; i < len; i++)
        {
            if(colors[i] == colors[i-1])
            {
                time += min(neededTime[i], neededTime[i - 1]);
                neededTime[i] = max(neededTime[i], neededTime[i - 1]);
            }
        }
        return time;
    }
};