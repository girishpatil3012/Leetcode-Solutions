class Solution {
public:
   double helper(int n1,int n2,vector<vector<double>>&dp)
   {
        if(n1==0 && n2!=0) 
            return 1;
        if(n1==0 && n2==0) 
            return 0.5;
        if(n2==0) 
            return 0;
        if(dp[n1][n2]>=0) 
            return dp[n1][n2];
       
     double ans= helper(max(0,n1-100),n2,dp);
           ans+= helper(max(0,n1-75),max(0,n2-25),dp);
           ans+= helper(max(0,n1-50),max(0,n2-50),dp);
           ans+= helper(max(0,n1-25),max(0,n2-75),dp);
           return dp[n1][n2]=ans*0.25;

   }
    double soupServings(int n) 
    {
          if(n>=5000) 
              return 1.0;
          vector<vector<double>> dp(n+1,vector<double>(n+1,-1));
          return helper(n,n,dp);

    }
};