class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
        int len = piles.size(), max_coins = 0;
        sort(piles.begin(), piles.end());
        
        for(int i = len/3; i < len; i += 2)
        {
            max_coins += piles[i];
        }
        return max_coins;
    }
};