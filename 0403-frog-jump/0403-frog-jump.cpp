class Solution {
public:
bool solve(int index,int k,vector<int>& stones,unordered_map<int,int>& mapp,vector<vector<int>>& dp)
{
    if(index==stones.size()-1)
    {
        return true;
    }
    else if(index>=stones.size())
    {
        return false;
    }
    if(dp[index][k]!=-1)
    {
        return dp[index][k];
    }
    bool first=false;
    if(k-1>0)
    {
        if(mapp.find(stones[index]+k-1)!=mapp.end())
        {
            first=solve(mapp[stones[index]+k-1],k-1,stones,mapp,dp);
        }
    }
    bool second=false;
    if(mapp.find(stones[index]+k)!=mapp.end())
        {
            second=solve(mapp[stones[index]+k],k,stones,mapp,dp);
        }
    bool third=false;
    if(mapp.find(stones[index]+k+1)!=mapp.end())
        {
            third=solve(mapp[stones[index]+k+1],k+1,stones,mapp,dp);
        }
    return dp[index][k]=first||second||third;
}
    bool canCross(vector<int>& stones) {
        //first jump is 1 units
        if(stones[1]-stones[0]>1)
        {
            return false;
        }
        int k=1;
        unordered_map<int,int> mapp;
        for(int i=0;i<stones.size();i++)
        {
            mapp[stones[i]]=i;
        }
        int n=stones.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
       return solve(1,k,stones,mapp, dp);
    }
};