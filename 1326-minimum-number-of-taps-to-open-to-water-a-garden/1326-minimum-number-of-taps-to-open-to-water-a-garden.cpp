class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        int minimum=0;
        int maximum=0;
        int tap=0;
        int index=0;
        while(maximum<n){
            for(int i=index;i<ranges.size();i++){
                if(i-ranges[i]<=minimum and i+ranges[i]>maximum){
                    maximum=i+ranges[i];
                    index=i;
                }
            }
            if(minimum==maximum) return -1;
            tap++;
            minimum=maximum;
        }
        return tap;
    }
};