class Solution {
public:
const int MOD = 1000000007;
    int numMusicPlaylists(int n, int goal, int k) {
         vector<long>v(n+1);
         v[0]=1;
    for (int i = 1; i <= goal; i++) {
        for (int j = n; j > 0; j--) {
            int maxi = max(0,j-k);
          v[j]=(v[j-1]*(n-j+1)+v[j]*maxi)%MOD;
        }
        v[0]=0;
    }
    return int(v[n]);
    }
};