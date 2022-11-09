class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int len = nums.size();
        
        for(int i = 0, j = 0; i < len; i++)
        {
            if(nums[i] % 2 == 0)
            {
                swap(nums[j++],nums[i]);
            }
        }
        return nums;
    }
};