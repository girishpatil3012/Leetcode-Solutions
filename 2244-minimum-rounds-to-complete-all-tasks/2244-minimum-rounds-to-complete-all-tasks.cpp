class Solution {
public:
    int minimumRounds(vector<int>& tasks)
    {
        unordered_map<int,int> mp;
        int len = tasks.size();
        int min_round = 0;
        
        for(int i = 0; i < len; ++i)
        {
            mp[tasks[i]]++;
        }
        
        for(auto it : mp)
        {
            if(it.second == 1)
                return -1;
            
            min_round += (it.second + 2) / 3;   // max task we can do is 3
        }
        return min_round;
    }
};