class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        vector<int> v;
        ans.push_back(1);
        for(int i = 1; i <= rowIndex; i++){
            v = ans;
            for(int j = 1; j < i; j++){
                v[j] = ans[j - 1] + ans[j];
            }
            v.push_back(1);
            ans = v;
        }
        return ans;
    }
};