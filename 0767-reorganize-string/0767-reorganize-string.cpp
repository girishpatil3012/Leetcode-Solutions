class Solution {
public:
    static bool comp(pair<char, int> &A, pair<char, int> &B) {
        return A.second > B.second;
    }
    string reorganizeString(string s) {
        int freq[26] = {0};
        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }
        vector<pair<char, int>> temp;
        for(int i = 0; i < 26; i++) {
            temp.push_back({i + 'a', freq[i]});
        }
        sort(temp.begin(), temp.end(), comp);
        if(temp[0].second > (s.length() + 1) / 2) return "";
        int k = 0;
        for(int i = 0; i < s.length(); i += 2) {
            s[i] = temp[k].first;
            temp[k].second--;
            if(temp[k].second == 0) k++;
        }
        for(int i = 1; i < s.length(); i += 2) {
            s[i] = temp[k].first;
            temp[k].second--;
            if(temp[k].second == 0) k++;
        }
        return s;
    }
};