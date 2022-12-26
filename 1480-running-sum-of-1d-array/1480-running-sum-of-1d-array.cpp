class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> vec;
        int len = nums.size();
        vec = nums;
        
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j < i; j++)
            {
                vec[i] += nums[j];
            }
        }
        
        return vec;
    }
};