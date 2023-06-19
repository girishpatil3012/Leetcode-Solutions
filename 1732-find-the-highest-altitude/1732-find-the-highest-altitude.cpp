class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        gain.insert(gain.begin(), 0);
        int len = gain.size();
        
        for(int i = 1; i < len; i++)
        {
            gain[i] = gain[i] + gain[i-1];
        }
        
        return *max_element(gain.begin(), gain.end());
    }
};