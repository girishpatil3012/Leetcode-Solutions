class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        int i = 0, j = 0;
        vector<int> vec;
        
        vec = nums;
        
        for(i = 0; i < nums.size(); i+=2)
        {
            vec[i] = nums[j];
            vec[i+1] = nums[n+j];
            j++;
        }
        
        return vec;
    }
};