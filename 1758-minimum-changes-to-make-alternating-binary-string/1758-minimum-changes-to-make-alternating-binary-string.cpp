class Solution {
public:
    int minOperations(string s) {
        // Intuition
        // The idea in here is really very simple. What we will do is we know that we have two possible options that is the string can start with either 1 or it can start with 0 we will brute force along them and return the min answer for both.
        int a = 0;
        int b = 0;
        int sz = s.size();
        for(int i = 0 ; i < sz ; i++)
        {
            a += ((i % 2 == 0 and s[i] == '1') or (i % 2 != 0 and s[i] == '0'));
            b += ((i % 2 == 0 and s[i] == '0') or (i % 2 != 0 and s[i] == '1'));
        }
        return min(a, b);
    }
};