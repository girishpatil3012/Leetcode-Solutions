class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int len = nums.size(), min_op = 0;
        
        for(int i = 0; i < len-1; i++)
        {
            if(nums[i] < nums[i+1])
            {
                continue;
            }
            else 
            {
                min_op += nums[i] + 1 - nums[i+1];
                nums[i+1] = nums[i] + 1;
            }
        }
        return min_op;
    }
};