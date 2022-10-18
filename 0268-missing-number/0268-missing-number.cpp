class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int len = nums.size(), missing_value = 0, i = 0;
        sort(nums.begin(), nums.end());
        
        for(i = 0; i < len; i++)
        {
            if(nums[i] != i)
            {
                missing_value = i;
                break;
            }
        }
        
        if(i == len)
        {
            return len;
        }
        else 
        {
            return missing_value;
        }
    }
};