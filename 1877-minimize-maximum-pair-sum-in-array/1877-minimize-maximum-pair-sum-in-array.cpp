#pragma GCC optimize("O3")
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int freq[100001]={0};
        #pragma unroll
        for(int x: nums )
            freq[x]++;
        int l=0, r=100000, maxP=0, pairN=1, rN=0, lN=0;
        #pragma unroll
        while (l < r) {
            #pragma unroll
            while (lN < pairN) {
                lN += freq[l++];
            }
            #pragma unroll
            while (rN < pairN) {
                rN += freq[r--];
            }
            maxP = max(maxP, l+r);
            pairN++;
        }
        return maxP;
    }
};