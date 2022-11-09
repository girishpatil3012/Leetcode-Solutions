class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int len = nums.size();
        int left = 0, right = len-1;
        
        vector<int> vec(len,0);

        for(int i = len - 1; i >= 0; i--)
        {

            if(abs(nums[left]) > nums[right])
            {
                vec[i] = nums[left]*nums[left];
                left++;
            }
            else{
                vec[i] = nums[right]*nums[right];
                right--;
            }
        }
        return vec;
    }
};