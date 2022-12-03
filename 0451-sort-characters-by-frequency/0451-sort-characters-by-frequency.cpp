class Solution {
public:
    string frequencySort(string s) 
    {
        int len = s.size();
        unordered_map<char,int> mp;
        vector<string> bucket(len+1,"");
        
        for(auto c : s)
        {
            mp[c]++;
        }
        
        for(auto it : mp)
        {
            char ch = it.first;
            int n = it.second;
            
            bucket[n].append(n,ch);
        }
        
        string str = "";
        for(int i = len; i > 0; i--)
        {
            if(!bucket.empty())
            {
                str.append(bucket[i]);
            }
        }
        return str;
    }
};