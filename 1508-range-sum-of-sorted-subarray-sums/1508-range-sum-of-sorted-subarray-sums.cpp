class Solution
{
public:
    int rangeSum(vector<int> &nums, int n, int left, int right)
    {
        vector<int> subarraySum;
        // calculating sum of subarrays
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0; // make sum =0 each time for next iteration of sub array
            for (int j = i; j < nums.size(); j++)
            {
                sum = sum + nums[j];
                subarraySum.push_back(sum);
            }
        }
        sort(subarraySum.begin(), subarraySum.end());

        // Return desired result as left is 1 index is 1-1=0 right 4index
        // int result=0; //runtime error
        long long result = 0;
        int mod = 1e9 + 7;  //imagine 10 ^ as 1e
        for (int i = left - 1; i < right; i++)    
        {
            result = (result + subarraySum[i]) % mod;
        }
        return static_cast<int>(result);
    }
};