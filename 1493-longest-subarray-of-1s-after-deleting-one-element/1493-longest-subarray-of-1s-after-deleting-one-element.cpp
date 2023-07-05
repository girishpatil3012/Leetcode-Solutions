class Solution {
public:
    int longestSubarray(vector<int>& nums) {
    int j=0, n=nums.size(), sum=0, ans=0;
    
    for(int i=0; i<n; i++)
    {
        if(nums[i]==1)
        {
            sum++;
        }
        
        if(sum == i-j+1 || sum == i-j)
        {
            ans=max(ans, i-j);
        }
        else
        {
            while(i > j && sum!=i-j)
            {
                if(nums[j]==1)
                {
                    sum--;
                }
                
                j++;
            }
        }
    }
    
    return ans;
}
};