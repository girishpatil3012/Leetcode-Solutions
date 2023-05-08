class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int len = mat.size();
        int sum = 0;
        int i = 0, j = 0;
        
        while(i < len)
        {
            sum += mat[i][j];
            i++;
            j++;
        }
        
        i = 0;
        j = len - 1;
        
        while(i < len)
        {
            if(i != j)
            {
                sum += mat[i][j];
            }
            i++;
            j--;
        }
        
        return sum;
    }
};