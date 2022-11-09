class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int len = nums.size();
        int count = 0, maxcount = 0;
        
        for(int i = 0; i < len; i++ )
        {
            if(nums[i] == 1)
            {
                count++;
                if(count > maxcount)
                {
                    maxcount = count;
                }
            }
            else 
            {
                count = 0;
            }
        }
        return maxcount;
    }
};