class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        vector<int> freq(26,0);
        
        for(int i = 0; i < s.length(); ++i)
        {
            freq[s[i] - 'a']  = i;
        }
        
        vector<int> vec;
        int start = 0, end = 0;
		
        for(int i = 0; i < s.length(); ++i)
        {
            end = max(end, freq[s[i] - 'a']);
            if( i == end)
            {
                vec.push_back(i - start + 1);
                start = i + 1;
            }
        }
        return vec;
    }
};