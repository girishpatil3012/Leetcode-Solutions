class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) 
    {
        string res = s;
        map<int, pair<string,string> > mp;
        int key=0, len = indices.size();
        
        for(int i = 0; i < len; i++)
        {
            mp[indices[i]] = make_pair(sources[i], targets[i]);
        }
        int dx=0;
        
        for(auto itr:mp)
        {
            auto idx = itr.first;
            auto rec = itr.second;
            if(s.substr(idx, rec.first.size()) == rec.first)
            {
                res.erase(idx+dx, rec.first.size());
                res.insert(idx+dx, rec.second);
                dx += rec.second.size() - rec.first.size();
            }
        }
        return res;
    }
};