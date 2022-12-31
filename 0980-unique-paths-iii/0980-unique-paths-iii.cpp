class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j, int nobs, int &count)
    {
        if (i >= grid.size() || i < 0 || j >= grid[0].size() || j < 0)
            return;   /* if out of range */
        if (grid[i][j] == -1) 
            return;   /* if obstacle */
        if (grid[i][j] == 2) 
        {          /* if reached end */
            if (nobs == 0) 
                count++;     
            return;
        }
        
        grid[i][j] = -1;   
        nobs = nobs - 1;   
        
        dfs(grid, i, j-1, nobs, count); // left
        dfs(grid, i, j+1, nobs, count); // right
        dfs(grid, i-1, j, nobs, count); // up
        dfs(grid, i+1, j, nobs, count); // down
        
        grid[i][j] = 0; 
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) 
    {
        int nobs = 0, i, j;
        
        for (int r = 0; r < grid.size(); r++) 
        {
            for (int c = 0; c < grid[0].size(); c++) 
            {
                if (grid[r][c] == 1)
                {
                    i = r;
                    j = c;
                }
                else if (grid[r][c] != -1) 
                { 
                    nobs++;
                }
            }
        }
        int count = 0;
        dfs(grid, i, j, nobs, count);
        return count;
    }
};