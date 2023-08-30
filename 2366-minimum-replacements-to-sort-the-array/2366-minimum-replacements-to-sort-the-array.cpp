class Solution {
public:
    long long minimumReplacement(vector<int>& nums)
    {
        int n=nums.size();
        long long ans=0;
        int next=nums[n-1];
        
        for(int i=n-2; i>=0; i--)
        {
            int temp=nums[i];
            int hisse=(temp+next-1)/next;
            int val=temp/hisse;
            ans+=(hisse-1);
            next=min(next,val);
        }
        return ans;
    }
};