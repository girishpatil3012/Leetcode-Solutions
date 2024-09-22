class Solution {
    public int findKthNumber(int n, int k) {
        int cur = 1;
        k--; // Decrement k by 1 because we are starting from 1

        while (k > 0) {
            long steps = count(cur, n);
            if (steps <= k) {
                cur++;
                k -= steps;
            } else {
                cur *= 10;
                k--;
            }
        }
        return cur;
    }

    private long count(long p, long n) {
        long steps = 0;
        long first = p;
        long last = p;

        while (first <= n) {
            steps += Math.min(n + 1, last + 1) - first;
            first *= 10;
            last = last * 10 + 9;
        }

        return steps;
    }
}