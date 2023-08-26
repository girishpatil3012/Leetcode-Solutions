class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs)
    {
        vector<pair<int,int>>vc;
        for(int i=0;i<pairs.size();i++)
        {
            vc.push_back({pairs[i][0],pairs[i][1]});
        }
        sort(vc.begin(),vc.end());
        int n = pairs.size();
        vector<int>dp(n+1,1);
        for(int i =1;i<vc.size() ; i++)
        {
            for(int j =0 ; j<i ;j++){
                if(vc[j].second <vc[i].first){
                    
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
        }
        int mx=0;
        for(int i=0;i<vc.size();i++)
        {
            cout<<dp[i]<<endl;
            mx = max(mx,dp[i]);
        }
        return mx;
    }
};