class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        ios_base :: sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int n = nums.size();
        vector<int> ans(n);
        int sum = accumulate(nums.begin(),nums.end(),0);
        int Lnum = 0;
        int Lsum = 0;
        for(int i = 0; i < n; i++)
        {
            int Rsum = sum - Lsum - nums[i];
            int Rnum = n - 1 - Lnum;
            ans[i] = (Lnum * nums[i] - Lsum) + (Rsum - Rnum * nums[i]);
            Lsum += nums[i];
            Lnum++;
        }
        return ans;
    }
};