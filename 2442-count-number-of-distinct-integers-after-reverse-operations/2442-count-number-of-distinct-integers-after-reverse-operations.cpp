class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) 
    {
        unordered_set<int> st;
        int len = nums.size();
        
        for(int i = 0; i < len; i++)
        {
            st.insert(nums[i]);
            
            int rev = 0;
            while(nums[i] != 0)
            {
                rev = rev*10 + nums[i]%10;
                nums[i] /= 10;
            }
            st.insert(rev);
        }
        return st.size();
    }
};