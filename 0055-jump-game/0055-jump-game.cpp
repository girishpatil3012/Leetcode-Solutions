class Solution {
public:
    bool canJump(vector<int>& nums)
    {
        int len = nums.size();
        int i = 0;
        int jump = 0;
        
        for(jump = 0; i < len && i <= jump; ++i)
        {
            jump = max(nums[i] + i, jump);
        }
     
        if(i == len)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};