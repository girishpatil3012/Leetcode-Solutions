class Solution {
public:
   vector<int> sortByBits(vector<int>& arr) 
   {
       
        vector<pair<int,int>> vp;
        vector<int> ans;
        int len = arr.size();
       
        for(int i = 0; i < len; i++)
        {
            bitset<32>b1(arr[i]);
            int val=b1.count();
            vp.push_back(make_pair(val,arr[i]));
        }
     
        sort(vp.begin(), vp.end());
       
        for(auto it:vp)
        {
            ans.emplace_back(it.second);
        }
       return ans; 
    }
};