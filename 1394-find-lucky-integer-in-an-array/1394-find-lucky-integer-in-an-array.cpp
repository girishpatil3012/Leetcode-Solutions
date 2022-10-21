class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        int len = arr.size();
        int lucky = -1;
        unordered_map<int,int> mp;
        vector<int> vec;
        
        for(int i = 0; i < len; i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->first == it->second)
            {
                vec.emplace_back(it->first);
            }
        }
        
        if(vec.size() > 0)
        {
            lucky = *max_element(vec.begin(), vec.end());
            return lucky;
        }
        else
        {
            return lucky;
        }   
    }
};