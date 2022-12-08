class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int len = nums.size();
        int repeated = -1;
        
        sort(nums.begin(), nums.end());
        for(int i = 0; i < len-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                repeated = nums[i];
                break;
            }
        }
        return repeated;
    }
};