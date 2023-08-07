class Solution {
    int binsearch(vector<vector<int>> &matrix,int target,int mid){
        int left = 0,right = matrix[mid].size()-1;
        if(target< matrix[mid][left]){
                return -1;
            }
            else if(target > matrix[mid][right]){
                return 1;
            }
            while(left<=right){
                int m = (left+right)/2;
                if(target == matrix[mid][m]){
                    return 0;
                }
                else if(target < matrix[mid][m]){
                    right = m-1;
                }
                else if(target > matrix[mid][m]){
                    left = m+1;
                }                
        }
        return -2;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int rleft = 0;int rright = m-1;
        
        while(rleft<=rright){
            int mid = (rleft+rright)/2;
            int k = binsearch(matrix,target,mid);
            if(k == -1){
                rright = mid-1;
            }else if(k == 1){
                rleft = mid+1;
            }else if(k == 0) return true;
            else if(k == -2) return false;
        }
        return false;
    }
};