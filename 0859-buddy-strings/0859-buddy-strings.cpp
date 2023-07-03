class Solution {
public:

    bool checkFreq(map<char,int>& mp){
        for(auto it: mp){
            if(it.second>1)
                return true;
        }
        return false;
    }

    bool buddyStrings(string s, string goal) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        if(s==goal){
            return checkFreq(mp);
        }
        int first=-1;
        int second=-1;
        for(int j=0;j<s.size();j++){
            if(s[j]!=goal[j]){
                if(first==-1)
                    first=j;
                else{
                    second=j;
                    break;
                }
            }
        }
        if(first!=-1 && second!=-1)
            swap(s[first],s[second]);
        if(s==goal)
            return true;
        return false;
    }
};