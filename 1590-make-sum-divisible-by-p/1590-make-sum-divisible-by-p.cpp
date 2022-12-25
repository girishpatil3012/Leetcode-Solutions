class Solution {
public:
    int minSubarray(vector<int>& nums, int p) 
    {
        int n = nums.size();
        int sum = 0;
        for (int num : nums) 
        {
            sum = (sum + num) % p;
        }
        if (sum == 0) 
        {
            return 0;
        }
        unordered_map<int, int> preSums;
        preSums[0] = -1;
        int result = n;
        
        for (int i = 0, preSum = 0; i < n; i++) 
        {
            preSum = (preSum + nums[i]) % p;
            int x = (p + preSum - sum) % p;
            if (preSums.find(x) != preSums.end())
            {
                result = min(result, i - preSums[x]);
            }
            preSums[preSum] = i;
        }
        if (result == n) 
        {
            return -1;
        }
        return result;
    }
};