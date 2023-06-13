class Solution {
public:
    static int equalPairs(const vector<vector<int>>& grid) noexcept
    {
        const size_t n = size(grid);
        int ans = 0;
        for (size_t c = 0; c < n; ++c) {
            vector<int> column;
            column.reserve(n);
            for (size_t r = 0; r < n; ++r)
                column.push_back(grid[r][c]);
            
            ans += count(begin(grid), end(grid), column);
        }
        return ans;
    }

};