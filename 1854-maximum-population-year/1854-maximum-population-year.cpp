class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) 
    { 
        vector<int> vec(101, 0);
        for(auto x : logs)
        {
            for(int i = x[0]; i < x[1]; ++i)
            {
                vec[i - 1950]++;
            }
        }
        
        int max = 0, year = 0;
        for(int i = 0; i <= 100; ++i)
        {
            if(max < vec[i])
            {
                max = vec[i];
                year = i;
            }
        }
        return year+1950;
    }
};