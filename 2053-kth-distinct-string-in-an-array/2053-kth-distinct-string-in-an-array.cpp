class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        int len = arr.size(), count = 0;
        unordered_map<string,int> mp;
        string str = "";
        
        for(auto i : arr)
        {
            mp[i]++;
        }
        
        for(auto x : arr)
        {
            if(mp[x] == 1)
            {
                count++;
                if(count == k)
                {
                    str = x;
                    break;
                }
            }       
        }
        
        return str;
    }
};