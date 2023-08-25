class Solution {
public:
    bool check(string &s1,string &s2,string &s3,int i , int j,vector<vector<int>> &dp)
    {
        int n = s1.size(),m = s2.size();
        if(i==n && j==m)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        bool f = 0,s = 0;
        if(i<n && s1[i]==s3[i+j]){
            f= check(s1,s2,s3,i+1,j,dp);
        }
        if(j<m && s2[j]==s3[i+j]){
            s = check(s1,s2,s3,i,j+1,dp);
        }
        if(!(f||s))return dp[i][j]=0;
        return dp[i][j] = 1;
    }
    
    bool isInterleave(string s1, string s2, string s3)
    {
        int n = s1.length(), m = s2.length();
        if(n+m!=s3.size())return 0;
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
         return check(s1,s2,s3,0,0,dp);
    }
};