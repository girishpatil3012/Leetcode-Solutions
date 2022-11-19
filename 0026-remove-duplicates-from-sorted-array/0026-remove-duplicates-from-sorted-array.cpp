class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int len = nums.size();
        int newIndex = 1;
        
        for(int i = 1; i < len; i++)
        {
            if(nums[i - 1] != nums[i]) 
            {    
                nums[newIndex] = nums[i];     
                newIndex++;
            }
        }
        
        return newIndex;
    }
};