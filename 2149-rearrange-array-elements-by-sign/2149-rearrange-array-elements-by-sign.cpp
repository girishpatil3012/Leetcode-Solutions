class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int len = nums.size();
        int index1 = 0, index2 = 1;
        vector<int> vec(len,0);
        
        for(int i = 0; i < len; i++)
        {
            if(nums[i] > 0)
            {
                vec[index1] = nums[i];
                index1 += 2;
            }
            if(nums[i] < 0)
            {
                vec[index2] = nums[i];
                index2 += 2;
            }
        }
        return vec;
    }
};