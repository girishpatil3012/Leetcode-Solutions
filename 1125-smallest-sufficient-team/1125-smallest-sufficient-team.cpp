class Solution {
public:
    long long get_choices(long long target,vector<int>&people_skills,vector<long long>&dp){
        if(target==0){
            return 0;
        }
        if(dp[target]!=INT_MAX){
            return dp[target];
        }
        for(int i=0;i<people_skills.size();i++){
            int new_target=target&(~people_skills[i]);
            if(new_target!=target){
                // get choices for the new target...
                long long get_choices_new=get_choices(new_target,people_skills,dp);
                // so our overall choice will be
                long long overall_choice=(1LL<<i)|get_choices_new;
                // get the counts of all bit sets in overall_choices and compare it with previous results of target...
                bitset<60>mask_old(dp[target]);
                bitset<60>mask_new(overall_choice);
                int cnt1=mask_new.count(),cnt2=mask_old.count();
                if(cnt1<cnt2){
                    dp[target]=overall_choice;
                }
            }
        }
        return dp[target];
    }
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        int r=req_skills.size(),n=people.size();
        unordered_map<string,int>mp;
        for(int i=0;i<r;i++){
            mp[req_skills[i]]=i;
        }
        vector<int>people_skills;
        for(auto ele:people){
            int mask=0;
            for(auto skill:ele){
                mask|=1<<mp[skill];
            }
            people_skills.push_back(mask);
        }
        long long target=pow(2,r)-1;
        vector<long long>dp(1<<r,INT_MAX);
        long long choices=get_choices(target,people_skills,dp);
        string s=bitset<60>(choices).to_string();
        reverse(s.begin(),s.end());
        vector<int>teams;
        for(int i=0;i<60;i++){
            if(s[i]=='1'){
                teams.push_back(i);
            }
        }
        return teams;
    }
};