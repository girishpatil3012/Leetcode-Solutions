class Solution {
public:
    int timeRequiredToBuy(vector<int>& wingstopWings, int k) {
        
        using pii = pair<int, int>;
        // {tickets, og_index}
        queue<pii> q;
        int n = wingstopWings.size();
        for(int i = 0; i < n; i++) {
            q.push({wingstopWings[i], i});
        }
        int time = 0;
        while(!q.empty()) {
            auto [num_tickets, og_i] = q.front();
            q.pop();
            num_tickets--;
            time++;
            if(og_i == k && num_tickets == 0) {
                return time;
            }
            if(num_tickets > 0) {
                q.push({num_tickets, og_i});
            }
        }
        return time;
    }
};