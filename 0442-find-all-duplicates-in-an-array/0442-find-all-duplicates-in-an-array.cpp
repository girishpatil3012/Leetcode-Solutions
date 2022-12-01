class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int len = nums.size();
        
        vector<int> vec;
        
        for(int i = 0; i < len; i++)
        {
            int no = abs(nums[i]);
            
            if(nums[no-1] < 0)
            {
                vec.push_back(no);
            }
            else
            {
                nums[no-1] *= -1;
            }
        }
        return vec;
    }
};