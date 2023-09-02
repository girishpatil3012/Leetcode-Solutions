class Solution {
public:
    unordered_set<string> st;
    int n;
    int solve(string &s, int i,vector<int> & dp){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        string substr="";
        int ans=n;
        for(int j=i;j<n;j++){
            substr+=s[j];
            int currextra=(st.find(substr)==st.end())?substr.size():0;
        
            int remextra=solve(s,j+1,dp);
            int total=currextra+remextra;

            ans=min(ans,total);

        }
        return dp[i]=ans;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        n=s.length();
        for(auto &tt:dictionary){
            st.insert(tt);
        }
        vector<int> dp(n,-1);
        return solve(s,0,dp);
    }
};