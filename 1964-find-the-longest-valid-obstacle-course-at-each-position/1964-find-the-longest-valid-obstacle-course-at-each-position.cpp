class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obs)
    {
        vector<int> nd;
        for (int i = 0; i < obs.size(); ++i) {
            auto it = upper_bound(begin(nd), end(nd), obs[i]);
            if (it == end(nd)) {
                nd.push_back(obs[i]);
                it = prev(end(nd));
            }
            else
                *it = obs[i];
            obs[i] = it - begin(nd) + 1;
        }
        return obs;
    }
};