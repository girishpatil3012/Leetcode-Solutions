class Solution {
public:
    int maxAscendingSum(vector<int>& nums) 
    {
        int len = nums.size();
        int max_sum = nums[0], current = nums[0];
        
        for(int i = 1; i < len; i++)
        {
            if(nums[i] > nums[i-1])
            {
                current += nums[i];
            }
            else 
            {
                max_sum = max(max_sum,current);
                current = nums[i];
            }
        }
        return max(max_sum,current);
    }
};