class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int len = temperatures.size();
        vector<int> vec(len,0);
        stack<int> st;
        
        for(int i = 0; i < len; ++i)
        {
            while(!st.empty() && temperatures[i] > temperatures[st.top()])
            {
                vec[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return vec;
    }
};