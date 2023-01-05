class Solution 
{
private:
    static bool comp(vector<int>&a, vector<int>&b)
    {
        return a[1] < b[1];
    }
public:
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        sort(points.begin(),points.end(),comp);
        int len = points.size();
        int arrows=1;
        int end=points[0][1];

        for(int i = 1; i < len;i++)
        {
            if(points[i][0] > end)
            {
                arrows++;
                end=points[i][1];
            }
        }
        return arrows;
    }
};