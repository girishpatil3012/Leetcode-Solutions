class Solution {
public:
    // time/space: O(nlogn)/O(logn)
    vector<vector<int>> findMatrix(vector<int>& nums) {
        // sort the array
        sort(nums.begin(), nums.end());

        // convert into a 2D array
        vector<vector<int>> result;
        int r = 0;
        for (auto& num : nums) {
            // go back to the first row if there is a new integer
            if ((r > 0) && (result[r - 1].back() != num)) r = 0;
            // create a new row if needs
            if (r >= result.size()) result.push_back({});
            // push the integer and move to the next row
            result[r++].push_back(num);
        }
        return result;
    }
};