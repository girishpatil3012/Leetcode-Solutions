class Solution {
public:
    int numWays(int steps, int arrLen) {
        int M = 1e9 + 7;
        // dp[i][j]: how many ways to reach i-th pos using j steps
        vector<vector<int>> dp(steps / 2 + 1, vector<int>(steps + 1, -1));
        function<long long(int,int)> dfs = [&](int pos, int steps) -> long long {
            // if we walk outside the array or use all the steps
            // then return 0
            if (pos < 0 || pos > arrLen - 1 || pos > steps) return 0;
            // if we use all the steps, return 1 only if pos is 0
            if (steps == 0) return pos == 0;
            // if it has been calculated, return directly
            if (dp[pos][steps] != -1) return dp[pos][steps];
            // memoize it
            return dp[pos][steps] = (
                // move to the left
                dfs(pos - 1, steps - 1) % M + 
                // stay at current position
                dfs(pos, steps - 1) % M + 
                // move to the right
                dfs(pos + 1, steps - 1) % M
            ) % M;
        };
        return dfs(0, steps);
    }
};