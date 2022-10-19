class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) 
    {
        int len = patterns.size(), count = 0;
        
        for(int i = 0; i < len; i++)
        {
            if(word.find(patterns[i]) != -1)
            {
                count++;
            }
        }
        return count;
    }
};