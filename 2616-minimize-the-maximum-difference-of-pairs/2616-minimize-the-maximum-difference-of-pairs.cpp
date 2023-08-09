class Solution {
public:
int solve(int i,int sz,int p,vector<int>&nums,vector<vector<int>>&dp)
{  if(sz==p)return 0;
  if(i>=nums.size()-1)return 1e9;
  if(dp[i][sz]!=-1)return dp[i][sz];
int ans;
ans=  min(solve(i+1,sz,p,nums,dp),max(abs(nums[i+1]-nums[i]),solve(i+2,sz+1,p,nums,dp)));
return dp[i][sz]=ans;
}
    int minimizeMax(vector<int>& nums, int p) {
        if(p==0)return 0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=nums[n-1]-nums[0];
        while(l<=r)
        {
            int m=l +(r-l)/2;
            int cnt=0;
            for(int i=0;i<n-1;i++)
            {
                if(nums[i+1]-nums[i]<=m)
                {
                    cnt++;
                    i++;
                }
            }
            if(cnt>=p)r=m-1;
            else l=m+1;
        }
        return l;
        
    }
};