class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        vector<string> vec = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        
        unordered_set<string> st;
        int len1 = words.size();
        
        for(int i = 0; i < len1; i++)
        {
            string str = "";
            int len2 = words[i].size();
            
            for(int j = 0; j < len2; j++)
            {
                str += vec[words[i][j] - 'a'];
            }
            
            st.insert(str);
        }
        
        return st.size();
    }
};