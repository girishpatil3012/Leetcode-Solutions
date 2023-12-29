class Solution {
public:
    int minDifficulty(std::vector<int>& jobDifficulty, int d) {
        n = jobDifficulty.size();
        if (n < d) return -1;

        dp = std::vector<std::vector<int>>(n, std::vector<int>(d + 1, -1));

        return helper(d, 0, jobDifficulty);
    }

private:
    int n;
    std::vector<std::vector<int>> dp;

    int helper(int d, int i, const std::vector<int>& jobDifficulty) {
        if (d == 0 && i == n) return 0;
        if (d == 0 || i == n) return INT_MAX;
        if (dp[i][d] != -1) return dp[i][d];

        int maxVal = jobDifficulty[i];
        int minVal = INT_MAX;

        for (int j = i; j < n; ++j) {
            maxVal = std::max(maxVal, jobDifficulty[j]);
            int future = helper(d - 1, j + 1, jobDifficulty);

            if (future != INT_MAX) {
                minVal = std::min(minVal, future + maxVal);
            }
        }

        return dp[i][d] = minVal;
    }
};