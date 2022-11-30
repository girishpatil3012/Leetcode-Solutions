class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        int len = arr.size();
        unordered_map<int,int> mp;
        bool flag = true;
        
        for(int i=0; i < len; i++)
        {
            mp[arr[i]]++;
        }
        
        unordered_set<int> st;
        
        for(auto i:mp)
        {
            if(st.count(i.second) != 0)
            {
                flag = false;
                break;
            }
            else
            {
                st.insert(i.second);
            }
        }     
        return flag; 
    }
};