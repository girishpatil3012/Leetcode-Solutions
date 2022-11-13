class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) 
    {
        unsigned int len = nums.size(), count = 0;
        
        for(int i = 0; i < len; i++)
        {
            unsigned int no = nums[i];
            for(int j = i; j < len; j++)
            {
                no = lcm(no,nums[j]);
                if(no == k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};