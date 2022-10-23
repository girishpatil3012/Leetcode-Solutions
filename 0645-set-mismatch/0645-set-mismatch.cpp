class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int len = nums.size();
        
        int initial_sum = accumulate(nums.begin(), nums.end(), 0);
        
        unordered_set<int> st;
        for(auto x : nums)
        {
            st.insert(x);
        }
        
        int set_sum = accumulate(st.begin(), st.end(), 0);
        
        int repeated_no = initial_sum - set_sum;
        
        int missing_no = len * (len+1)/2 - set_sum;
        
        return {repeated_no, missing_no};
    }
};