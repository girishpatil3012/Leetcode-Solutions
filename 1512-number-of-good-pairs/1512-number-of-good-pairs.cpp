class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int i = 0,j = 0;
        int count = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            for(j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    count++;
                }
            }
        }
        
        return count;
    }
};