class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int len = nums.size();
        int left = 0;
        int right = 0;
        long sum = 0;
        int maxii = 0;
        
        while(right < len)
        {
            if (sum > k){
                sum -= nums[right] - nums[left];
                left++;
                continue;
            }
            if (sum <= k)
            {
                maxii = max(right-left+1,maxii);
                right++;
                if (right<nums.size())
                {
                    sum += (long)(right-left)*(nums[right]-nums[right-1]);
                }
            }
        }
        return maxii;
    }
};