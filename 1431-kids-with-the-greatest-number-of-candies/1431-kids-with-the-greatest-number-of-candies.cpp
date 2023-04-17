class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> vec;
        int i = 0, max = 0, sum = 0;
        
        max = *max_element(candies.begin(), candies.end());
        
        for(i = 0; i < candies.size(); i++)
        {
            sum = 0;
            sum = candies[i] + extraCandies;
            if(sum >= max)
            {
                vec.push_back(true);
            }
            else
            {
                vec.push_back(false);
            }
        }
        
        return vec;
    }
};