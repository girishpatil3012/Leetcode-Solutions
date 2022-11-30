class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int len = nums.size();
        int maxi = INT_MIN, index = 0;
        
        for(int i = 0; i < len; i++)
        {
            if(nums[i] > maxi)
            {
                maxi = nums[i];
                index = i;
            }
        }
        return index;
    }
};