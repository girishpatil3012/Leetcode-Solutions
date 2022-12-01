class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int len = nums.size();
        int start = 1;
        int end = 1;
        vector<int> vec(len,1);
        
        for(int i = 0; i < len; i++)
        {
            vec[i] = vec[i] * start;
            start = start * nums[i];
            
            vec[len-1-i] *= end;
            end = end * nums[len-1-i];
        }
        return vec;
    }
};