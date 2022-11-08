class Solution {
public:
    int triangularSum(vector<int>& nums) 
    {
        int len = nums.size();
        
        while(len--)
        {
            for(int i = 0; i < len; i++)
            {
                nums[i] = (nums[i] + nums[i+1]) % 10;
            }
        }
        return nums[0];
    }
};