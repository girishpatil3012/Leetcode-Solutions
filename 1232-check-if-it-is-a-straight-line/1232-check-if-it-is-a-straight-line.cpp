class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        bool flag = true;
        int len = coordinates.size();
        int x0 = coordinates[0][0], x1 = coordinates[1][0];
        int y0 = coordinates[0][1], y1 = coordinates[1][1];
        int dx = x1 - x0;
        int dy = y1 - y0;
        
        for(int i = 2; i < len; i++)
        {
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            
            if(((x - x0) * dy) != ((y - y0) * dx))
            {
                flag = false;
                break;
            }
        }
        
        return flag;
    }
};