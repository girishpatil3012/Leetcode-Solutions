class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int len = nums.size();
        
        for(int i = 0; i < len; i++)
        {
            auto it = find(nums.begin(), nums.end(), val);

            if(it != nums.end())
            {
                int index = it - nums.begin();
                nums.erase(nums.begin() + index);
            }
            else 
            {
                break;
            }
        }
        return nums.size();
            
    }
};