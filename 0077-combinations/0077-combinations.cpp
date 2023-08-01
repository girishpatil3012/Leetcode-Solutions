class Solution {
public:
    vector<vector<int>> ans;
    void c(vector<int>& t, int idx, int n, int k){
        if (t.size() == k){ 
            ans.push_back(t);
            return;
        }
        if (idx > n) return;
        for (int i=idx; i<=n; i++){
            t.push_back(i);
            c(t, i+1, n, k);
            t.pop_back();
        } 
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        c(temp, 1, n, k);
        return ans;    
    }
};