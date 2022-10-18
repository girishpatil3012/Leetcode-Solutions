class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int len = nums.size(), index = 0;
        
        for(int i = 0; i < len; i++)
        {
            if(nums[i] < target)
            {
                index++;
            }
            
            if(nums[i] == target)
            {
                index = i;
                break;
            }
        }
        
        return index;
    }
};