class Solution {
public:
    int countElements(vector<int>& nums) 
    {
        int n = nums.size(), ans = 0;
        int mn = INT_MAX, mx = INT_MIN;
        
        for(auto x: nums)
        {
            mx = max(mx, x);
            mn = min(mn, x);
        }
        
        for(auto x: nums)
        {
            if(x > mn && x < mx) 
                ans++;
        }
        
        return ans;
    }
};