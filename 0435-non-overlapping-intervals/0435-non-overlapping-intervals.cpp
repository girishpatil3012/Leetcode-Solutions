class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i=0,j=1;
        int ans=0;
        while(j<intervals.size()){
            if(intervals[i][1]<=intervals[j][0]){
                i=j;
            }
            else if(intervals[i][1]>intervals[j][0] && intervals[i][1]<=intervals[j][1]){
                
                ans++;
            }
            else if(intervals[i][1]>intervals[j][1]){
                ans++;
                i=j;
            }
            j++;
        }
        return ans;
    }
};