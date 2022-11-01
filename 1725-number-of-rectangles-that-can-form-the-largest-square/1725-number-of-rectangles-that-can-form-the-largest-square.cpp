class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) 
    {
        int len1 = rectangles.size();
        int maxLen = 0, count = 0;
        
        for(int i = 0; i < len1; i++)
        {
            int mini = min(rectangles[i][0], rectangles[i][1]);
            
            if(maxLen < mini)
            {
                maxLen = mini;
                count = 1;
            }
            else if(maxLen == mini)
            {
                count++;
            }
        }
        
        return count;
    }
};