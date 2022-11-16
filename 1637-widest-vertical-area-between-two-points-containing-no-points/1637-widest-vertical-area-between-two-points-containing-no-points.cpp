class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) 
    {
        set<int> st;
        int max_width_area = 0;
        
        for(auto x : points)
        {
            st.insert(x[0]);
        }
        
        for(auto it = next(begin(st)); it != st.end(); it++)
        {
            max_width_area = max(max_width_area, *it - *prev(it));
        }
        return max_width_area;
    }   
};