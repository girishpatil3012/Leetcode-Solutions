class Solution {
public:
    int countTriplets(vector<int>& arr) 
    {
        map<int, vector<int>> mp;
        mp[0].push_back(-1);
        int x = 0, ans = 0;
        
        for (int i = 0; i < arr.size(); i++) 
        {
            x ^= arr[i];
            for (auto j: mp[x])
            {
                int start = j + 1, end = i;
                ans += end - start;
            }
            mp[x].push_back(i);
        }
        return ans;
    }
};