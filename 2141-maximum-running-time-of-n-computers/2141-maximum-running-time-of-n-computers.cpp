class Solution {
public:
    bool ispossible(vector<int>&arr,long long k,int n){
        long long sum=0;
        for(auto x:arr){
            if(x<k) sum+=x;
            else sum+=k;
        }
        return sum>=k*n;
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        long long starttime=0;
        long long endtime=0;
        for(auto x:batteries) endtime+=x;
        long long ans=0;
        while(starttime<=endtime){
            long long mid=(starttime+endtime)/2;

            if(ispossible(batteries,mid,n)){
                ans=mid;
                starttime=mid+1;
            }
            else endtime=mid-1;
        }
        return ans;
    }
};