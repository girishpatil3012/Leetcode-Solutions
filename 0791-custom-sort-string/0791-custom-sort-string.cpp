class Solution {
public:
    string customSortString(string order, string s) {
        // Create a map to store the order of each character in 'order'
        std::unordered_map<char, int> orderMap;
        for (int i = 0; i < order.length(); ++i) {
            orderMap[order[i]] = i;
        }

        // Custom comparator function to sort characters in 's' based on their order
        auto customComparator = [&](char a, char b) {
            return orderMap[a] < orderMap[b];
        };

        // Sort string 's' using the custom comparator
        std::sort(s.begin(), s.end(), customComparator);

        return s;
    }
};