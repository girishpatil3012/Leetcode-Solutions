class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int len = nums.size();
        int pivot = -1;
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        int left_sum = 0;
        
        for(int i = 0; i < len; ++i)
        {
            total_sum -= nums[i];
            if(total_sum == left_sum)
            {
                pivot = i;
                break;
            }
            left_sum += nums[i];
        }
        return pivot;
    }
};