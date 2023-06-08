class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int count = 0;
        int len1 = grid.size();
        
        for(int i = 0; i < len1; i++)
        {
            int len2 = grid[i].size();
            for(int j = 0; j < len2; j++)
            {
                if(grid[i][j] < 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};