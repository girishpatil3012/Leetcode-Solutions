class Solution {
public:
    int kthGrammar(int n, int k)
    {
        static const int initial_guess = 1;
        int res = initial_guess;
        while (n != 1) 
        {
            // if current node is a right child of its parent => invert it
            if (k % 2 == 0)
                res = 1 - res;
            k = std::ceil(k / 2.0);
            n -= 1;
        }
        return res == 0 ? initial_guess : (1 - initial_guess);
    }
};