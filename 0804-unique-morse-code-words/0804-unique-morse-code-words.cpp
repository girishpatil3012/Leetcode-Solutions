class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        vector<string> vec = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        
        unordered_set<string> st;
        
        for (auto w : words) 
        {
            string str;
            for (auto c : w)
            {
                str += vec[c - 'a'];
            }
            st.insert(str);
        }
        
        return st.size();
    }
};