class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int len = nums.size();
        
        for(int i = 0; i < len; i++)
        {
            if(nums[i] == 0)
            {
                for(int j = i+1; j < len; j++)
                {
                    if(nums[j] != 0)
                    {
                        swap(nums[i], nums[j]);
                        break;
                    }
                }
            }    
        }
    }
};