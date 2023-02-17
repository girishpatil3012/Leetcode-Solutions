//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        if(N == K)
        return GeekNum[N-1];
        
        if(K == 1)
        return GeekNum[0];
        
        vector<long long> ans;
        long long temp = 0;
        int j = 0;
       
        for(int i = 0; i < N; i++){
            if( i < K){
            ans.push_back(GeekNum[i]);
            temp += GeekNum[i];
            }
            
           else if(i == K)
           ans.push_back(temp);
           
           else{
               temp = temp + temp - ans[j++];
               ans.push_back(temp);
           }
            
        }
        return temp;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends