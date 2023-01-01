class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int mid = 0;
        int len = nums.size();
        int i = 0, j = len-1;
        
        while(i <= j)
        {
            mid = (i + j)/ 2;
            
            if(target == nums[mid])
            {
                return mid;
            }
            
            if(target < nums[mid])
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        return -1;
    }
};