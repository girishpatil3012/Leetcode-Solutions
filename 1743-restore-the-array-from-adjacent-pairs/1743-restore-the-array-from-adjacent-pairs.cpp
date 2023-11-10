class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int> ans;
        unordered_map<int,vector<int>> mp;
        for(auto it: adjacentPairs){
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        set<int> chk;
        int temp=-1e9;
        for(auto it: mp){
            if(it.second.size()==1){
                temp=it.first;
                break;
            }
        }
        chk.insert(temp);
        ans.push_back(temp);
        
        while(1){
            auto str=mp[temp];
            if(str.size()==1 && chk.count(str[0]))break;
            else if(chk.count(str[0]) && chk.count(str[1]))break;

            if(!chk.count(str[0])){
                temp=str[0];
                ans.push_back(temp);
                chk.insert(temp);
            }
            else if(!chk.count(str[1])){
                temp=str[1];
                ans.push_back(temp);
                chk.insert(temp);
            }
        }
        return ans;
    }
};