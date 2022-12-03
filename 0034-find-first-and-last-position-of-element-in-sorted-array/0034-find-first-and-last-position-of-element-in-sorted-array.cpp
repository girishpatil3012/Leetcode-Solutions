class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int len = nums.size();
        int start_index = -1, end_index = -1;
        
        for(int i = 0 ; i < len; i++)
        {
            if(nums[i] == target)
            {
                start_index = i;
                break;
            }
        }
        
        for(int i = len-1; i >= 0; i--)
        {
            if(nums[i] == target)
            {
                end_index = i;
                break;
            }
        }
        return {start_index, end_index};
    }
};