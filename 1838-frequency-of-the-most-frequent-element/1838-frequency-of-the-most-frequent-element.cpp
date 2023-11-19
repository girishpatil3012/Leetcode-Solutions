class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int len = nums.size();
        int start = 0, end = 0, maxii = INT_MIN;
        long sum = 0;
        
        while(end < len)
        {
            if (sum > k)
            {
                sum -= nums[end] - nums[start];
                start++;
                continue;
            }
            if (sum <= k)
            {
                maxii = max(end - start + 1, maxii);
                end++;
                if (end < len)
                {
                    sum += (long)(end - start) * (nums[end] - nums[end-1]);
                }
            }
        }
        return maxii;
    }
};