class Solution {
public:
    bool isPossible(vector<int> &dist, int n, double hour, int speed) {
        double curr = 0;
        for(int i=0; i<n; i++) {
            if(i != n-1) curr += ceil((double)dist[i] / speed);
            else curr += (double)dist[i] / speed;
            if(curr > hour) return false;
        }

        return true;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n = dist.size();
        if(n > ceil(hour)) return -1;

        int l = 1, r = 10000000;
        int ans = 0, mid;
        while(l <= r) {
            mid = (l + r) / 2;
            if(isPossible(dist, n, hour, mid)) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        } 
        
        return ans;
    }
};