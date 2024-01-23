class Solution {
public:
    // time/space: O(nnk)/O(n)
    int maxLength(vector<string>& arr, int start = 0, int bitmap = 0) {
        // terminate
        if (start == arr.size()) return 0;
        if ((dp.count(start) != 0) && (dp[start].count(bitmap) != 0)) return dp[start][bitmap];

        // enumerate
        int maxLen = 0;
        for (int i = start; i < arr.size(); i++) {
            // find the unique characters bitmap in `arr[i]`
            int newBitmap = 0, k = arr[i].size();
            for (auto& c : arr[i]) newBitmap |= (1 << (c - 'a'));
            
            // discard `arr[i]` if not unique (w/o or w/ previous subsequence)
            if (__builtin_popcount(newBitmap) != k) continue;
            if ((bitmap & newBitmap) != 0) continue;

            // pick `arr[i]` and try the next `arr[i + 1, ...]`
            maxLen = max(maxLen, k + maxLength(arr, i + 1, bitmap | newBitmap));
        }
        return dp[start][bitmap] = maxLen;
    }
private:
    unordered_map<int, unordered_map<int, int>> dp;
};