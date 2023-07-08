class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        vector<int> split_line;
        for (int i = 0; i < weights.size()-1; i++)
            split_line.emplace_back(weights[i] + weights[i+1]);
        
        sort(split_line.begin(), split_line.end());

        return accumulate(split_line.end() - (k - 1), split_line.end(), 0LL) - accumulate(split_line.begin(), split_line.begin() + (k - 1), 0LL);
    }
};