class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> f(26, -1);
        vector<int> l(26, -1);
        int maxi = -1;

        for (int i = 0; i < s.size(); ++i)
        {
            int m = s[i] - 'a';

            if (f[m] == -1) 
            {
                f[m] = i;
            } 
            else 
            {
                l[m] = i;
                maxi = max(maxi, l[m] - f[m] - 1);
            }
        }

        return maxi;
    }
};