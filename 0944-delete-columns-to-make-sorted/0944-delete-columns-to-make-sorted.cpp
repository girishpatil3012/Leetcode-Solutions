class Solution {
public:
    int minDeletionSize(vector<string>& strs)
    {
        int len1 = strs.size();
        int len2 = strs[0].size();
        int count = 0;
        
        for(int i = 0; i < len2; ++i)
        {
            for(int j = 0; j < len1-1; j++)
            {
                if(strs[j][i] > strs[j+1][i])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};