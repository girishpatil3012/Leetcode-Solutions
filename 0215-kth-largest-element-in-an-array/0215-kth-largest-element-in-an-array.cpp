class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        set<int> s;
        sort(nums.begin(), nums.end());
        return nums[nums.size()-k];
    }
};