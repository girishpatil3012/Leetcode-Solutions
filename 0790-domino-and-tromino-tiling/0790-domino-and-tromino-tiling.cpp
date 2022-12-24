#define M 1000000007
#define ll long long
class Solution {
public:
    int numTilings(int N) 
    {
        if (N <= 2) 
            return N;
        vector<vector<ll>> r;
        r.push_back({1, 1, 2});
        r.push_back({1, 0, 0});
        r.push_back({0, 1, 1});
        r = power(r, N - 2);
        return (r[0][0] * 2 + r[0][1] + r[0][2]) % M;
    }
    
    vector<vector<ll>> power(vector<vector<ll>>& x, int n) 
    {
        if (n == 1) 
            return x;
        int m = n >> 1;
        auto r = power(x, m);
        r = multiply(r, r);
        if (n & 1) 
        {
            r = multiply(r, x);
        }
        return r;
    }
    
private:
    vector<vector<ll>> multiply(const vector<vector<ll>>& a, const vector<vector<ll>>& b) {
        vector<vector<ll>> r(3, vector<ll>(3, 0));
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                for (int k = 0; k < 3; k++) 
                {
                    r[i][j] += a[i][k] * b[k][j];
                }
                r[i][j] %= M;
            }
        }
        return r;
    }
};