class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> ans;
        for(int i = 0; i < a.size(); i++){
            if(!ans.empty() && ans.back() > 0  && a[i] < 0){
                //collision
                while(!ans.empty() && ans.back() > 0 && (ans.back() < -1*a[i])){
                    ans.pop_back();
                }
                if(ans.empty() || ans.back() < 0){
                    ans.push_back(a[i]);
                }
                else if(ans.back() == -1*a[i]){
                    ans.pop_back();
                }
            }
            else{
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};