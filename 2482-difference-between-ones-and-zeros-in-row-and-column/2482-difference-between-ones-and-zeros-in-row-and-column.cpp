class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) 
    {
        int len1 = grid.size(), len2  = grid[0].size();
        vector<int> onesR(len1,0), onesC(len2,0), zerosR(len1,0), zerosC(len2,0);
        
        for(int i = 0; i < len1; i++)
        {
            for(int j = 0; j < len2; j++)
            {
                if(grid[i][j] == 1)
                {
                    onesR[i] += 1;
                    onesC[j] += 1;
                }
                if(grid[i][j] == 0)
                {
                    zerosR[i] += 1;
                    zerosC[j] += 1;
                }
            }
        }
        
        for(int i = 0; i < len1; i++)
        {
            for(int j = 0; j < len2; j++)
            {
                grid[i][j] = onesR[i] + onesC[j] - zerosR[i] - zerosC[j];
            }
        }
        return grid;
    }
};