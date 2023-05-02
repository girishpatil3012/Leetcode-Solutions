class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int len = nums.size();
        int count = 1;
        
        for(int i = 0; i < len; i++)
        {
            if(nums[i] == 0)
            {
                return 0;
            }
            if(nums[i] < 0)
            {
                count = -count;
            }
        }
        
        return count;
    }
};