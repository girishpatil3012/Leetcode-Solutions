class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        vector<int> prev(n2+1), curr(n2+1);
        int sum = 0;

        prev[0] = 0;
        for(int i = 1; i <= n2; i++) {
            sum += s2[i-1];
            prev[i] = sum;
        }

        sum = 0;

        for(int i = 1; i <= n1; i++) {
            sum += s1[i-1];
            curr[0] = sum;

            for(int j = 1; j <= n2; j++) {
                if(s1[i-1] == s2[j-1]) {
                    curr[j] = min(prev[j-1], min(prev[j] + s1[i-1], curr[j-1] + s2[j-1]));
                }    
                else 
                    curr[j] = min(prev[j] + s1[i-1], curr[j-1] + s2[j-1]);
            }
            prev = curr;
        }

        return prev[n2];
};
};