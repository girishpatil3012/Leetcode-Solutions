class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n + 1, -1);  // DP array for maximum sum at each position

        return help(arr, k, n, dp);
    }

    int help(vector<int>& arr, int k, int i, vector<int>& dp) {
        if (i == 0) {  // base case starting point
            return 0;
        }

        if (dp[i] != -1) { // if already calculated
            return dp[i]; 
        }

        int curmaxi = 0, best = 0;

        for (int t = 1; t <= k && t <= i; ++t) { // Iterate up to k elements within bounds
            curmaxi = max(curmaxi, arr[i - t]);  // Update maximum within current partition
            best = max(best, help(arr, k, i - t, dp) + curmaxi * t);  // Update maximum sum considering current partition
        }

        dp[i] = best; // store is Dp
        return best;
    }
};